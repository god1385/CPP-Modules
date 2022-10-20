#include "Dog.hpp"

Dog::Dog(const Dog& copy){
	std::cout <<"Dog Copy constructor called" << std::endl;
	this->type= copy.getType();
	this->brain = copy.brain;
}
Dog &Dog::operator = (const Dog &op){
	std::cout << "Dog Copy assignment called" << std::endl;
	this->type = op.getType();
	return(*this);
}

Dog::Dog(){
	std::cout <<"Dog Default constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "Dog";
}

Dog::Dog(std::string name){
	this->type = name;
	std::cout <<"Dog Name constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog(){
	std::cout <<"Dog Default destructor called" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << this->type << " makes a typical dog noise, something like woof woof" << std::endl;
}

