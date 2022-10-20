#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon{
	private:
	std::string weapon_type;

	public:
	Weapon(std::string type);
	~Weapon();
	void setType(std::string name);
	std::string getType();
};

#endif
