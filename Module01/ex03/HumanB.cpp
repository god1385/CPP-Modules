#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): nameofhumanB(name), wea(nullptr){}

HumanB::~HumanB(void) {
	std::cout << this->nameofhumanB << " was killed" << std::endl;
}

void HumanB::setWeapon(Weapon &weaponn){
	this->wea = &weaponn;
}

void HumanB::attack(){
	if (this->wea)
		std::cout << this->nameofhumanB << " " << "attack with his " << this->wea->getType() << std::endl;
	else
		std::cout << this->nameofhumanB << " " << "has no weapon" << std::endl;
}
