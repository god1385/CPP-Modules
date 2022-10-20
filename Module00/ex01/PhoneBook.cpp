#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	std::cout << "Welcome to the PhoneBook" << std::endl;
}

PhoneBook::~PhoneBook(){
	std::cout << "Good bye and have a good day" << std::endl;
}

void PhoneBook::ft_print_table(){
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
	for (int i = 1; i < 9; i++)
			phones[i].ft_print_one(i);
}

void PhoneBook::search_con(int i){
	if (contact){
		std::cout << "Please, add contacts before" << std::endl;
		exit(1);
	}
	phones[i].searching();
}

void PhoneBook::ft_new(int i, std::string first, std::string last, std::string nick, std::string number, std::string secret){
	contact = false;
	phones[i].ft_contact(i, first, last, nick, number, secret);
}

