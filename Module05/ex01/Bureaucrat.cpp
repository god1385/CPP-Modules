#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string bureaucrat, int number) : name(bureaucrat), grade(number)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	if (number > 150)
		throw Bureaucrat::GradeTooLowException();
	if (number < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat default destructor called" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Bureaucrat& oper){
	os << oper.getName() << ", bureaucrat grade " << oper.getGrade();
	return os;
}

std::string Bureaucrat::getName() const
{
	return(this->name);
}

int Bureaucrat::getGrade() const
{
	return(this->grade);
}

void Bureaucrat::increaseGrade(){
	this->grade = grade - 1;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decreaseGrade(){
	this->grade = grade + 1;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form& form){
	form.beSigned(*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	this->grade = copy.getGrade();
}
Bureaucrat &Bureaucrat::operator = (const Bureaucrat &op)
{
	std::cout << "Bureaucrat assignment called" << std::endl;
	this->grade = op.getGrade();
	return(*this);
}
