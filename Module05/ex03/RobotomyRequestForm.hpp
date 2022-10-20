#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm: public Form
{
	private:
	std::string target;
	public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string tar);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	RobotomyRequestForm& operator = (const RobotomyRequestForm &op);
	void execute(Bureaucrat const & executor) const;
};
#endif
