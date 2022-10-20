#include "ClapTrap.hpp"

int main(void){
	ClapTrap clap("John");
	clap.attack("Gay guy");
	clap.takeDamage(8);
	clap.beRepaired(1);
	clap.takeDamage(3);
	clap.attack("Gay guy");
	return 0;
}
