#include "Dog.hpp"

Dog::Dog(const Dog& copy){
	std::cout <<"Dog Copy constructor called" << std::endl;
	this->type= copy.getType();
}
Dog &Dog::operator = (const Dog &op){
	std::cout << "Dog Copy assignment called" << std::endl;
	this->type = op.getType();
	return(*this);
}

Dog::Dog(){
	std::cout <<"Dog Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string name){
	this->type = name;
	std::cout <<"Dog Name constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout <<"Dog Default destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << this->type << " makes a typical dog noise, something like woof woof" << std::endl;
}
