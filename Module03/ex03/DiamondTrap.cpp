#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default construtor has been called" << std::endl;
	this->FragTrap::setHP();
	this->ScavTrap::setEnergy();
	this->FragTrap::setAttack();
}

DiamondTrap::DiamondTrap(std::string nick) : ScavTrap(), FragTrap(), name(nick)
{
	std::cout << "DiamondTrap " << nick << " construtor has been called" << std::endl;
	this->ClapTrap::name = this->name + "_clap_name";
	this->FragTrap::setHP();
	this->ScavTrap::setEnergy();
	this->FragTrap::setAttack();
}

DiamondTrap::~DiamondTrap(){
	std::cout << "RIPBOZO" << std::endl;
}

void DiamondTrap::attack(std::string const& target){
	ScavTrap::attack(target);
}

void DiamondTrap::WhoAmI(void){
	std::cout << "Diamond name is " << this->name << ", ClapTrap name is " << this->ClapTrap::name << std::endl;
}
