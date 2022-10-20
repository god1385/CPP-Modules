#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain's default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy){
	std::cout <<"Brain Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	    this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator = (const Brain &op){
	std::cout << "Brain Copy assignment called" << std::endl;
    for (int i = 0; i < 100; i++)
	    this->ideas[i] = op.ideas[i];
	return(*this);
}

Brain::~Brain(){
    std::cout << "Brain's default destructor called" << std::endl;
}
