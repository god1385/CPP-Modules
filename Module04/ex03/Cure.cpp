#include "Cure.hpp"

Cure::Cure(){
	this->type = "cure";
	//std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure(){
	//std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator = (const Cure &op){
	this->type = op.getType();
	return(*this);
}

Cure::Cure(const Cure& copy){
	this->type = copy.getType();
}

AMateria* Cure::clone() const{
	AMateria* clone = new Cure;
	return(clone);
}

void Cure::use(ICharacter& target) {
	std::cout << "heals "<< target.getName() << "’s wounds" << std::endl;
}
