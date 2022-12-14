#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
	std::string name;
	public:
	DiamondTrap();
	DiamondTrap(std::string nick);
	~DiamondTrap();
	void WhoAmI();
	void attack(std::string const& target);
};
# endif
