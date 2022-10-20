#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private:
	std::string const nickname;
	bool sig;
	int const signgrade;
	int const execgrade;
	public:
	Form(std::string form, int sgrade, int egrade);
	~Form();
	Form(const Form& copy);
	Form& operator = (const Form &op);
	int getSigngrade() const;
	int getExecgrade() const;
	bool getSigned() const;
	std::string getName() const;
	void beSigned(Bureaucrat& bureo);
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
std::ostream& operator<<(std::ostream& os, const Form& oper);
#endif
