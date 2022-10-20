#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal("Bird");
	const Animal* j = new Dog("Good boy");
	const Animal* i = new Cat("Filthy twat");
	const Animal* m = meta;
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << m->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	m->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	
	return (0);
}
