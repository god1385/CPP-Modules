#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Form;
#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"
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
	void signForm(Form& form);
	void executeForm(Form const & form);
	class GradeTooHighException: public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "The number is too low, error";
		}
	};
	class GradeTooLowException: public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "The number is too big, error";
		}
	};
	class UnsignedException: public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "The from is unsigned, error";
		}
	};
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& oper);
#endif

