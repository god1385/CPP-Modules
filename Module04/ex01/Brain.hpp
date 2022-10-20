#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
class Brain{

	private:
	std::string ideas[100];
	public:
	Brain();
	Brain(std::string name);
	~Brain();
	Brain(const Brain& copy);
	Brain& operator = (const Brain &op);

	
};
#endif
