#include "Zombie.hpp"

void Zombie:: announce(){

	std::cout << this->name_of_zombie << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name){
	this->name_of_zombie = name;
}

Zombie::~Zombie(void){
	std::cout << this->name_of_zombie << " has fallen into a pit, nice job!" << std::endl;
}
