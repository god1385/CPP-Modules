#include "iter.hpp"

int main()
{
	int numbers[5] = {5, 2, 3, 13, 9};
	int *numptrs[5];
	char chars[5] = {'h', 'm', 's', 'b', 'c'};
	char *charptrs[5];
	for (int i = 0; i < 5; i++)
	{
		numptrs[i] = &numbers[i];
		charptrs[i] = &chars[i];
	}
	iter<int>(numbers, 5, print);
	std::cout << std::string(10, '-') << std::endl;
	iter<int*>(numptrs, 5, fill);
	iter<int>(numbers, 5, print);
	std::cout << std::string(10, '-') << std::endl;
	iter<char>(chars, 5, print);
	std::cout << std::string(10, '-') << std::endl;
	iter<char*>(charptrs, 5, fill);
	iter<char>(chars, 5, print);
	return (0);
}
