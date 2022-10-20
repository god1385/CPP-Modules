#include <string>
#include <iostream>

int main(void){

	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Address in memory: " << &string  << std::endl;
	std::cout << "Address in memory (PTR): " << stringPTR  << std::endl;
	std::cout << "Address in memory (REF): " << &stringREF  << std::endl;

	std::cout << "Using PTR: " << *stringPTR  << std::endl;
	std::cout << "Using REF: " << stringREF << std::endl;
	return(0);
}