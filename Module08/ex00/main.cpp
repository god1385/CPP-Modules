#include "easyfind.hpp"
int main(void)
{
	std::vector<int> numbervector;
	
	std::list<int> numberlist;
	for (int i = 1; i <= 10; i++)
	{
		numbervector.push_back(i);
		numberlist.push_back(i);
	}
	std::cout << "trying to find 0 to 11 in list" << std::endl;
	for (int i = 1; i < 12; i++)
	{
		try
		{
			std::cout << *(easyfind(numberlist, i)) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "trying to find 0 to 11 in vector" << std::endl;
	for (int i = 0; i < 12; i++)
	{
		try
		{
			std::cout << *(easyfind(numbervector, i)) << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}