#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string nick) : ClapTrap()
{
	std::cout << "ScavTrap " << nick << " has entered the battle" << std::endl;
	this->hp = 100;
	this->energy = 90;
	this->damage = 20;
}

ScavTrap::ScavTrap(){
	this->hp = 100;
	this->energy = 90;
	this->damage = 20;
	std::cout << "ScavTrap default constructor was initialized " << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap has left the battle" << std::endl;
}

void ScavTrap::attack (const std::string& target){
	if (this->hp > 0 && this->energy > 0)
	{
		std::cout << "The ScavTrap " << this->name << " attacks " << target << ", causing " << this->damage << " damage."
		<< std::endl;
		this->energy = this->energy - 1;
	}
	else
		std::cout << "ScavTrap does not have enough hp or energy to do that" << std::endl;
}

void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->name << " has entered the Gate Keeper mode" << std::endl;
}
