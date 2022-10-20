#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Form
{
	private:
	std::string target;
	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string tar);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	ShrubberyCreationForm& operator = (const ShrubberyCreationForm &op);
	void execute(Bureaucrat const & executor) const;
};
#endif
