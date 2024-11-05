
#include "include/Ice.hpp"

//default constructor
Ice::Ice() : AMateria("ice") {
	std::cout << GREEN << "     * [ICE] Default constructor called!\n" << RESET;
}

//constructor
Ice::Ice(const std::string &type) : AMateria(type) {
	std::cout << GREEN << "     * [ICE] Constructor called! Created: " << ITALIC << BOLD << _type  << RESET << std::endl;
}

//copy constructor
Ice::Ice(const Ice& src) : AMateria(src._type) { 
	std::cout << YELLOW << "    * [ICE] Copy constructor called! Created: " << ITALIC << BOLD << _type  << RESET << std::endl;
}

//assignement operator
Ice&	Ice::operator=(const Ice& src) {
	if (this != &src) {
		std::cout << BLUE << "  * [ICE] Assignement operator called! Assigned: " << src._type << " to " << ITALIC << BOLD << _type  << RESET << std::endl;
		this->_type = src._type;
	}
	return(*this);
}

//destructor
Ice::~Ice() {
	std::cout << RED << "       * [ICE] Destructor called! Destroyed: " << _type << RESET << std::endl;
}


//clone function
Ice*    Ice::clone() const {
	std::cout << RED << "   * [ICE] clone created" << _type << RESET << std::endl;
	return (new Ice(*this));
}

void    Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
