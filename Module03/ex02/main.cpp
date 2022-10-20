# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main(void){
	FragTrap clap("John");
	clap.attack("Gays");
	clap.takeDamage(80);
	clap.beRepaired(70);
	clap.takeDamage(20);
	clap.attack("Gays");
	clap.highFivesGuys();
	return 0;
}
