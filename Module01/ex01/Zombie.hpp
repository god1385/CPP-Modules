#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
	public:
	Zombie(void);
	~Zombie(void);
	void announce(void);
	void name(std::string name);
	private:
	std::string name_of_zombie;
};

Zombie *zombieHorde(int n, std::string name);

#endif

