#include "Zombie.hpp"

int main(void){
	Zombie *zombie = newZombie("Garden Zombie");
	randomChump("Bob the zombie");
	delete zombie;
	return (0);
}