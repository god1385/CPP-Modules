#ifndef INTER_HPP
# define INTER_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
class Form;
class Intern
{
public:
Intern();
~Intern();
Intern(const Intern& copy);
Intern& operator = (const Intern &op);
static Form* shrub(std::string target);
static Form* pres(std::string target);
static Form* robo(std::string target);
Form* makeForm(std::string name, std::string tar);
class NoFromException: public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "Form name is unkown, error";
		}
	};
};
#endif
