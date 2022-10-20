#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <locale>

class Contact{
	public:
		Contact();
		~Contact();
		void ft_contact(int i, std::string firtsn, std::string lastt, std::string nickk, std::string numberr, std::string secrett);
		void searching();
		std::string ft_string(std::string search);
		void ft_print_one(int i);
	private:
		std::string fn;
		std::string ln;
		std::string nn;
		std::string pn;
		std::string ds;
};

#endif