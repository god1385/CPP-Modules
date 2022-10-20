#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
class  Bureaucrat
{
	private:
	std::string const name;
	int grade;
	public:
	Bureaucrat(std::string bureaucrat, int number);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator = (const Bureaucrat &op);
	std::string getName() const;
	int getGrade() const;
	void increaseGrade();
	void decreaseGrade();
	class GradeTooHighException: public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "The number is less than 1, error";
		}
	};
	class GradeTooLowException: public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "The number is more than 150, error";
		}
	};
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& oper);
#endif

