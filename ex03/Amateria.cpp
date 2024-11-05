
#include "include/AMateria.hpp"

//default constructor
AMateria::AMateria(void): _type("undefined materia") {
    std::cout << GREEN << "* [AMATERIA] Default constructor called!\n" << RESET;
}

//constructor
AMateria::AMateria(const std::string &type) : _type(type) {
    std::cout << GREEN << "* [AMATERIA] Constructor called! Created: " << ITALIC << BOLD << _type  << RESET << std::endl;
}

//copy constructor
AMateria::AMateria(const AMateria& src) : _type(src._type) { 
    std::cout << YELLOW << "* [AMATERIA] Copy constructor called! Created: " << ITALIC << BOLD << _type  << RESET << std::endl;
}

//assignement operator
AMateria&    AMateria::operator=(const AMateria& src) {
    if (this != &src) {
        std::cout << BLUE << "* [AMATERIA] Assignement operator called! Copied: " << src._type << " to " << ITALIC << BOLD << _type  << RESET << std::endl;
        this->_type = src._type;
    }
    return(*this);
}

//destructor
AMateria::~AMateria() {
    std::cout << RED << "* [AMATERIA] Destructor called! Destroyed: " << _type << RESET << std::endl;
}

std::string const & AMateria::getType() const {
    return (this->_type);
}

void AMateria::use(ICharacter& target) {
    (void)target;
}