#include "AMateria.hpp"

AMateria::AMateria(){
	this->type = "no type";
	//std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria(){
	//std::cout << "AMateria destructor called" << std::endl;
}
AMateria::AMateria(std::string const &type){
	this->type = type;
}

AMateria &AMateria::operator = (const AMateria &op){
	this->type = op.getType();
	return(*this);
}

AMateria::AMateria(const AMateria& copy){
	this->type = copy.getType();
}
std::string const & AMateria::getType() const{
	return(this->type);
}

void AMateria::use(ICharacter& target) {
	std::cout << target.getName() << " does not seem to be using any materia now" << std::endl;
}

