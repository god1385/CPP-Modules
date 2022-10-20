#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <locale>
# include "Contact.hpp"

class PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
		bool contact;
		void ft_new(int i, std::string first, std::string last, std::string nick, std::string number, std::string secret);
		void search_con(int i);
		void ft_print_table();
	private:
		Contact phones[9];
};

#endif