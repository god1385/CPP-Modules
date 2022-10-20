#include "Ice.hpp"

Ice::Ice(){
	this->type = "ice";
	//std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice(){
	//std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator = (const Ice &op){
	this->type = op.getType();
	return(*this);
}

Ice::Ice(const Ice& copy){
	this->type = copy.getType();
}

AMateria* Ice::clone() const{
	AMateria* clone = new Ice;
	return(clone);
}

void Ice::use(ICharacter& target) {
	std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}
