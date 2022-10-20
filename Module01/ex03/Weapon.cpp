#include "Weapon.hpp"

Weapon::Weapon(std::string type): weapon_type(type){}

Weapon::~Weapon(void) {}

std::string Weapon::getType(void){
	return(this->weapon_type);
}
void Weapon::setType(std::string name){
	this->weapon_type = name;
}

