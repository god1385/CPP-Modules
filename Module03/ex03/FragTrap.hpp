#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string nick);
	~FragTrap();
	void highFivesGuys(void);
	void setHP();
	void setEnergy();
	void setAttack();
};
#endif
