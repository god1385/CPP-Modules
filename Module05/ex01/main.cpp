#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Form tmp("C34", 98, 23);
	Form tmp2(tmp);
	Bureaucrat billy("Billy", 150);
	Bureaucrat bobby("Bobby", 149);
	Bureaucrat Valya("Valya", 49);
	Form fo("C28", 100, 50);
	try
	{
		Form form("C28", 155, -190);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Valya.signForm(fo);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		bobby.signForm(tmp);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		billy.signForm(fo);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
