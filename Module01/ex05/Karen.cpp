#include "Karen.hpp"

Karen::Karen(){

}

Karen::~Karen(){

}

void Karen:: debug(void){
	std::cout << "DEBUG: I love to get extra bacon for my"
		"7XL-double-cheese-triple-pickle burger. I just love it!" << std::endl;
}

void Karen:: error(void){
	std::cout << "ERROR: This is unacceptable, I want to speak to the manager now..." << std::endl;
}

void Karen:: info(void){
	std::cout << "INFO: I cannot believe adding extra bacon cost more money."
		"You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen:: warning(void){
	std::cout << "WARNING: I think I deserve to have some extra bacon for free."
		"I've been coming here for years and you just started working here last month"<< std::endl;
}

void Karen::complain(std::string level){
	void (Karen::*Karen_pointer[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string lvl[4] = {"debug", "info", "warning", "error"};
	int i = 0;
	while (i != 4){
		if (level == lvl[i])
			return(this->*Karen_pointer[i])();
		i++;
	}
}
