#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
	Cat();
	Cat(std::string name);
	~Cat();
	Cat(const Cat& copy);
	Cat& operator = (const Cat &op);
	void makeSound() const;
};
#endif
