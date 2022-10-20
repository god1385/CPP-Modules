#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>
#include <string>

template <typename T>

void iter(T *arrayptr, int length, void(*f)(T)){
	for (int i = 0; i < length; i++)
		(f)(arrayptr[i]);
}

template <typename T>
void print(T ar)
{
	std::cout << ar << std::endl;
}
template <typename T>
void fill(T *arr)
{
	*arr = 56;
}

#endif
