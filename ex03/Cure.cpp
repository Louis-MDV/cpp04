
#include "include/Cure.hpp"

//default constructor
Cure::Cure() : AMateria("cure") {
	std::cout << GREEN << "     * [CURE] Default constructor called!\n" << RESET;
}

//constructor
Cure::Cure(const std::string &type) : AMateria(type) {
	std::cout << GREEN << "     * [CURE] Constructor called! Created: " << ITALIC << BOLD << _type  << RESET << std::endl;
}

//copy constructor
Cure::Cure(const Cure& src) : AMateria(src._type) { 
	std::cout << YELLOW << "    * [CURE] Copy constructor called! Created: " << ITALIC << BOLD << _type  << RESET << std::endl;
}

//assignement operator
Cure&	Cure::operator=(const Cure& src) {
	if (this != &src) {
		std::cout << BLUE << "  * [CURE] Assignement operator called! Assigned: " << src._type << " to " << ITALIC << BOLD << _type  << RESET << std::endl;
		this->_type = src._type;
	}
	return(*this);
}

//destructor
Cure::~Cure() {
	std::cout << RED << "       * [CURE] Destructor called! Destroyed: " << _type << RESET << std::endl;
}

Cure*   Cure::clone() const {
	std::cout << RED << "   * [Cure] clone created" << _type << RESET << std::endl;
	return (new Cure(*this));       //creates and allocates a copy of this current Cure Obj
}

void    Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
