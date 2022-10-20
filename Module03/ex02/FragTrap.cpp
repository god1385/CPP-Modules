#include "FragTrap.hpp"

FragTrap::FragTrap(std::string nick) : ClapTrap()
{
	std::cout << "FragTrap " << nick << " has entered the battle" << std::endl;
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(){
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "FragTrap default constructor was initialized " << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap has left the battle" << std::endl;
}

void FragTrap:: highFivesGuys(void){
	std::cout << "FragTrap " << this->name << " is speading positive vibes, High Five Guys!!!!!" << std::endl;
}

