#include "Form.hpp"

Form::Form(std::string form, int sgrade, int egrade) : nickname(form), signgrade(sgrade), execgrade(egrade)
{
	std::cout << "Form default constructor called" << std::endl;
	this->sig = false;
	if (sgrade < 1 || egrade < 1)
		throw GradeTooHighException();
	if (sgrade > 150 || egrade > 150)
		throw GradeTooLowException();
}

Form::~Form(){
	std::cout << "Form default destructor called" << std::endl;
}

Form::Form(const Form& copy) : nickname(copy.nickname), signgrade(copy.getSigngrade()), execgrade(copy.getExecgrade())
{
	std::cout << "Form copy constructor called" << std::endl;
	this->sig = copy.sig;
}
Form &Form::operator = (const Form &op)
{
	std::cout << "Form assignment called" << std::endl;
	this->sig = op.sig;
	return(*this);
}

void Form::beSigned(Bureaucrat& bureo){
	if (bureo.getGrade() <= signgrade)
		this->sig = true;
	if (bureo.getGrade() > signgrade)
		this->sig = false;
	if (this->sig)
		std::cout << bureo << " signed a form: " << *this << std::endl;
	if (this->sig == false)
	{
		std::cout << bureo << " couldn't sign a form: " << *this << " because his grade is too low" << std::endl;
		if (bureo.getGrade() > 150)
			throw GradeTooLowException();
	}
}

int Form::getSigngrade() const{
	return (this->signgrade);
}

int Form::getExecgrade() const{
	return (this->execgrade);
}

bool Form::getSigned() const{
	return (this->sig);
}

std::string Form::getName() const{
	return (this->nickname);
}
std::ostream& operator<<(std::ostream& os, const Form& oper){
	os << "Form: " << oper.getName() << ", Sign status: " << oper.getSigned() << ", Sign grade: " << oper.getSigngrade()
	<< ", Execute grade: " << oper.getExecgrade();
	return os;
}
