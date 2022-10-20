#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45)
{
	this->target = "some form";
}

RobotomyRequestForm::RobotomyRequestForm(std::string tar): Form("RobotomyRequestForm", 72, 45)
{
	this->target = tar;
}

RobotomyRequestForm::~RobotomyRequestForm(){

}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->check(executor))
	{
		srand( time( 0 ) );
		int i;
		i = rand() % 10 + 1;
		if (i > 0 && i <=5)
			std::cout << this->target << " has been robotomized successfully " << std::endl;
		if (i > 5 && i <=10)
			std::cout << this->target << "'s robotomy failed " << std::endl;
	}
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : Form(copy)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	this->target = copy.target;
}
RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &op)
{
	std::cout << "RobotomyRequestForm assignment called" << std::endl;
	Form::operator=(op);
	this->target = op.target;
	return(*this);
}
