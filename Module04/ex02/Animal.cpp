#include "Animal.hpp"
Animal::Animal(const Animal& copy){
	std::cout <<"Animal Copy constructor called" << std::endl;
	this->type= copy.getType();
}
Animal &Animal::operator = (const Animal &op){
	std::cout << "Animal Copy assignment called" << std::endl;
	this->type = op.getType();
	return(*this);
}

Animal::Animal(){
	std::cout <<"Animal Default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(std::string name){
	this->type = name;
	std::cout <<"Animal Name constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout <<"Animal Default destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << this->type << " makes a typical animal noise, something like dying bird or whatever" << std::endl;
}

std::string Animal::getType(void) const {
	return (this->type);
}

void Animal::setType(const std::string& type){
	this->type = type;
}
