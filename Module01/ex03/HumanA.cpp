#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): nameofhumanA(name), wea(weapon) {}

HumanA::~HumanA(void){
	std::cout << this->nameofhumanA << " was killed" << std::endl;
}

void HumanA::attack(){
	std::cout << this->nameofhumanA << " " << "attack with his " << this->wea.getType() << std::endl;
}

