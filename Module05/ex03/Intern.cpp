#include "Intern.hpp"

Intern::Intern(){

}

Intern::~Intern(){

}

Form* Intern::shrub(std::string target){
	Form* form= new ShrubberyCreationForm(target);
	return(form);
}

Form* Intern::pres(std::string target){
	Form* form= new PresidentialPardonForm(target);
	return(form);
}

Form* Intern::robo(std::string target){
	Form* form= new RobotomyRequestForm(target);
	return(form);
}


Form* Intern::makeForm(std::string name, std::string tar){
	Form*(*pointer[3])(std::string target) = {shrub, pres, robo};
	std::string lvl[3] = {"shrubbery creation", "presidential pardon", "robotomy request"};
	int i = 0;
	Form* form = NULL;
	while(i < 3){
		if (name == lvl[i]){
			form = pointer[i](tar);
		}
		i++;
	}
	if (form != NULL)
		std::cout << "Intern creates " << *form << std::endl;
	else 
		throw NoFromException();
	return (form);
}

Intern::Intern(const Intern& copy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
}

Intern &Intern::operator = (const Intern &op)
{
	std::cout << "Intern assignment called" << std::endl;
	(void)op;
	return(*this);
}

