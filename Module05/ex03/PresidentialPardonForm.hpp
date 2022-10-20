#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
	private:
	std::string target;
	public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string tar);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	PresidentialPardonForm& operator = (const PresidentialPardonForm &op);
	void execute(Bureaucrat const & executor) const;
};
#endif
