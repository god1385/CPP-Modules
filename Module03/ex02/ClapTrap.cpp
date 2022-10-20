#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
	std::cout << "ClapTrap default constructor was initialized " << std::endl;
}


ClapTrap::ClapTrap(std::string nick){
	this->name = nick;
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
	std::cout << "ClapTrap " << this->name << " has enterned the scene" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "The ClapTrap " << this->name << " left the battle" << std::endl;
}

void ClapTrap::attack (const std::string& target){
	if (this->hp > 0 && this->energy > 0)
	{
		std::cout << "The ClapTrap " << this->name << " attacks " << target << ", causing " << this->damage << " damage."
		<< std::endl;
		this->energy = this->energy - 1;
		// std::cout << energy << std::endl;
	}
	else
		std::cout << "ClapTrap does not have enough hp or energy to do that" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "The ClapTrap " << this->name << " has been attacked by an enemy and took " << amount << " damage."
	<< std::endl;
	this->hp = this->hp - amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->hp > 0 && this->energy > 0)
	{
		std::cout << "The ClapTrap " << this->name << " repairs itslef and heals " << amount << " hp."
		<< std::endl;
		this->energy = this->energy - 1;
		this->hp = this->hp + amount;
		// std::cout << energy << std::endl;
	}
	else
		std::cout << "ClapTrap does not have enough hp or energy to do that" << std::endl;
}


