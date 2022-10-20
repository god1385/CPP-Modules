#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
	private:
	std::string nameofhumanB;
	Weapon *wea;

	public:
	HumanB(std::string name);
	void setName(std::string name);
	~HumanB();
	void setWeapon(Weapon &weaponn);
	void attack();
};

#endif
