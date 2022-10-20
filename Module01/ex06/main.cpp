#include "Karen.hpp"

int main(void){

	Karen karen;
	std::string level;
	std::getline(std::cin, level);
	karen.filter(level);
	return(0);
}
