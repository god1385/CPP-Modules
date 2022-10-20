#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137)
{
    this->target = "some form";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string tar): Form("ShrubberyCreationForm", 145, 137)
{
	this->target = tar;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){

}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->check(executor))
	{
	std::ofstream formFile;
	formFile.open(this->target + "_shrubbery");
	formFile <<"                            .                         " << std::endl;
    formFile <<"                                           .         "<< std::endl;  
    formFile <<"               .              .              ;%     "<< std::endl;   
    formFile <<"                 ,           ,                :;%  %"<< std::endl;   
    formFile <<"                  :         ;                   :;%;     .,"<< std::endl;   
    formFile <<"       ,.        %;     %;            ;        %;'    ,;"<< std::endl;
    formFile <<";       ;%;  %%;        ,     %;    ;%;    ,%'"<< std::endl;
    formFile <<" %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
   	formFile <<"  ;%;      %;        ;%;        % ;%;  ,%;'"<< std::endl;
    formFile <<"   `%;.     ;%;     %;'         `;%%;.%;'"<< std::endl;
    formFile <<"    `:;%.    ;%%. %@;        %; ;@%;%'"<< std::endl;
    formFile <<"       `:%;.  :;bd%;          %;@%;'"<< std::endl;
    formFile <<"         `@%:.  :;%.         ;@@%;'"   << std::endl;
    formFile <<"           `@%.  `;@%.      ;@@%;"        << std::endl;
    formFile <<"             `@%%. `@%%    ;@@%;"        << std::endl;
    formFile <<"               ;@%. :@%%  %@@%;"       << std::endl;
    formFile <<"                 %@bd%%%bd%%:;"    << std::endl;
    formFile <<"                  #@%%%%%:;;"<< std::endl;
    formFile <<"                   %@@%%%::;"<< std::endl;
    formFile <<"                   %@@@%(o);  . '"         << std::endl;
    formFile <<"                   %@@@o%;:(.,'"        << std::endl;
    formFile <<"               `.. %@@@o%::;"       << std::endl;
    formFile <<"                  `)@@@o%::;"         << std::endl;
    formFile <<"                   %@@(o)::;"        << std::endl;
    formFile <<"                  .%@@@@%::;"         << std::endl;
    formFile <<"                  ;%@@@@%::;."          << std::endl;
    formFile <<"                 ;%@@@@%%:;;;."<< std::endl;
    formFile <<"              ...;%@@@@@%%:;;;;,.."<< std::endl;
	formFile.close();
	}
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : Form(copy)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	this->target = copy.target;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &op)
{
	std::cout << "ShrubberyCreationForm assignment called" << std::endl;
	Form::operator=(op);
	this->target = op.target;
	return(*this);
}
