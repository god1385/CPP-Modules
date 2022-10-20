#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
	Brain *brain;
	public:
	Cat();
	Cat(std::string name);
	~Cat();
	Cat(const Cat& copy);
	Cat& operator = (const Cat &op);
	void makeSound() const;
};
#endif
