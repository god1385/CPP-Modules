
#include "Bureaucrat.hpp"
int main()
{
	std::cout << "Test valid instanciation" << std::endl;
	{
		Bureaucrat test("normalWorker", 100);
		Bureaucrat Worker(test);
		std::cout << Worker << std::endl;
	}
	std::cout << "\nTest invalid instanciation: too high" << std::endl;
	{
		try {
			Bureaucrat betterThanYourBoss("betterThanYourBoss", 0);
			std::cout << betterThanYourBoss << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "\nTest invalid instanciation: too low" <<  std::endl;
	{
		try {
			Bureaucrat worstWorkerEver("worstWorkerEver", 151);
			std::cout << worstWorkerEver << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout <<  "\nTest invalid instanciation: too high after promotion" << std::endl;
	{
		try {
			Bureaucrat worstWorkerEver("worstWorkerEver", 1);
			worstWorkerEver.increaseGrade();
			std::cout << worstWorkerEver << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout <<  "\nTest invalid instanciation: too low after promotion" << std::endl;
	{
		try {
			Bureaucrat worstWorkerEver("worstWorkerEver", 150);
			worstWorkerEver.decreaseGrade();
			std::cout << worstWorkerEver << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}
