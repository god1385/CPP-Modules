#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	j->makeSound();
	i->makeSound();
	delete j;//should not create a leak
	delete i;

	// int number = 2;
	// Animal *animal[2];
	// for (int l = 0; l < number / 2; l++)
	// 	animal[l] = new Cat();
	// for (int l = number / 2; l < number; l++)
	// 	animal[l] = new Dog();
	// std::cout << "--------------------------------------------------------------------" << std::endl;
	// for (int l = 0; l < number; l++)
	// 	delete animal[l];
	return (0);
}
