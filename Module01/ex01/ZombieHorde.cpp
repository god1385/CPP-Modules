#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name){

	Zombie *zombieHorde = new Zombie[n];

	for (int i = 0; i < n; i++)
		zombieHorde[i].name(name);
	for (int j = 0; j < n; j++)
		zombieHorde[j].announce();
	return(zombieHorde);
}
