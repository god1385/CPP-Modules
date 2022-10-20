#include "Cat.hpp"

Cat::Cat(const Cat& copy){
	std::cout <<"Cat Copy constructor called" << std::endl;
	this->type= copy.getType();
}
Cat &Cat::operator = (const Cat &op){
	std::cout << "Cat Copy assignment called" << std::endl;
	this->type = op.getType();
	return(*this);
}

Cat::Cat(){
	std::cout <<"Cat Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(std::string name){
	this->type = name;
	std::cout <<"Cat Name constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout <<"Cat Default destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << this->type << " makes a typical cat noise, something like meow meow" << std::endl;
}
