#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
class NoMatchException: public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "Could not find any match, error";
		}
	};

template <typename T>
typename T::iterator easyfind(T array, int integer){
	std::cout << "The size of the container is: " << array.size() << std::endl;
	std::cout << "Trying to find number " << integer << " in the array" << std::endl;
	typename T::iterator iterator = find(array.begin(), array.end(), integer);
	if (iterator == array.end())
		throw NoMatchException();
	std::cout << "Success, the number was found" << std::endl;
	return (iterator);
}


#endif
