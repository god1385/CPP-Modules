#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5)
{
	this->target = "some form";
}

PresidentialPardonForm::PresidentialPardonForm(std::string tar): Form("PresidentialPardonForm", 25, 5)
{
	this->target = tar;
}

PresidentialPardonForm::~PresidentialPardonForm(){

}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->check(executor))
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : Form(copy)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	this->target = copy.target;
}
PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &op)
{
	std::cout << "PresidentialPardonForm assignment called" << std::endl;
	Form::operator=(op);
	this->target = op.target;
	return(*this);
}
