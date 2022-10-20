#include "Zombie.hpp"

int main(void){

	int i = 3;
	Zombie *zombie = zombieHorde(i, "Garden Zombie");
	delete [] zombie;
	return (0);
}
