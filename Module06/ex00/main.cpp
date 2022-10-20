#include <iostream>
#include <string>
#include <cstdlib>
bool check(std::string argument)
{
	std::string array[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	int i = 0;
	while (i < 6){
		if (argument == array[i])
			break;
		i++;
	}
	if (i >= 0 && i <= 2)
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << argument << std::endl;
		std::cout << "double: " << argument.substr(0, argument.size() - 1) << std::endl;
		return true;
	}
	if (i >= 3 && i <= 5)
	{
		std::cout << "char: " << "impossible" << std::endl;
		std::cout << "int: " << "impossible" << std::endl;
		std::cout << "float: " << argument + "f" << std::endl;
		std::cout << "double: " << argument << std::endl;
		return true;
	}
	return false;
}
int main(int argc, char **argv)
{
	if (argc > 2 || argc == 1){
		std::cout << "wrong number of arguments, error" << std::endl;
		return (0);
	}
	std::string argument;
	bool checkfloat = false;
	argument = argv[1];
	if (!check(argument))
	{
	double value;
	int i = 0;
	while(argv[1][i++]){
		if (argv[1][i] == '.')
			checkfloat = true;
	}
	char *checking;
	if (argument.size() > 1 || isdigit(argument[0]))
	{
		value = strtod(argv[1], &checking);
		if (*checking)
		{
			std::cout << "oops, try to give something normal" << std::endl;
			return (0);
		}
	}
	else
		value = argument[0];
	if (value > 31 && value < 127)
			std::cout << "char: " << static_cast<char>(value) << std::endl;
	else if (value > -1 && value < 256)
		std::cout << "char: " << "not displayable" << std::endl;
	else
		std::cout << "char: " << "impossible" << std::endl;
	if (value < -2147483648 || value > 2147483647)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int:" << static_cast<int>(value) << std::endl;
	if (checkfloat == true && value <= 100000000)
		std::cout << "float:" << static_cast<float>(value) << "f" << std::endl;
	else if (value < 100000000)
		std::cout << "float:" << static_cast<float>(value) << ".0f" << std::endl;
	else
		std::cout << "float:" << "impossible" <<  std::endl;
	if (checkfloat == true && value <= 100000000000000)
		std::cout << "double:" << static_cast<double>(value) << std::endl;
	else if (value <= 100000000000000)
		std::cout << "double:" << static_cast<double>(value) << ".0" << std::endl;
	else
		std::cout << "double:" << "impossible" <<  std::endl;
	}
	return (0);
}
