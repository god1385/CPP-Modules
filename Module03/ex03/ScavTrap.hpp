#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string nick);
	~ScavTrap();
	void attack(std::string const& target);
	void guardGate(void);
	void setHP();
	void setEnergy();
	void setAttack();
};
#endif
