#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
class ClapTrap{
	private:
	std::string name;
	int hp;
	int energy;
	int damage;
	public:
	ClapTrap();
	ClapTrap(std::string nick);
	~ClapTrap();
	void attack (const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif
