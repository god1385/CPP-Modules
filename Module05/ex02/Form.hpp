#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include <fstream>
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
	bool check(Bureaucrat const & executor) const;
	virtual void execute(Bureaucrat const & executor) const = 0;
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
	class UnexecutableException: public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "The grade is higher than executable grade, error";
		}
	};

};
std::ostream& operator<<(std::ostream& os, const Form& oper);
#endif
