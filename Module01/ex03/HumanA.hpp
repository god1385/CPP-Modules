#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
	private:
	std::string nameofhumanA;
	Weapon &wea;

	public:
	void setName(std::string name);
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();
};

#endif
