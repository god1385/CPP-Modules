#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
class Animal
{
	protected:
	std::string type;
	public:
	Animal();
	Animal(std::string name);
	virtual ~Animal();
	Animal(const Animal& copy);
	Animal& operator = (const Animal &op);
	virtual void makeSound() const = 0;
	std::string getType(void) const;
	void setType(const std::string &type);
};
#endif
