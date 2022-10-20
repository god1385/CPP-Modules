#include "Contact.hpp"
#include "PhoneBook.hpp"
# include <locale>

void ft_add(PhoneBook *phone, int i){
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
	std::cout << "Please, enter your name " << std::endl;
	getline(std::cin, firstname);
	std::cout << "Please, enter your last name " << std::endl;
	getline(std::cin, lastname);
	std::cout << "Please, enter your nickname " << std::endl;
	getline(std::cin, nickname);
	std::cout << "Please, enter your phone number " << std::endl;
	getline(std::cin, phonenumber);
	std::cout << "Please, enter your darkest secret " << std::endl;
	getline(std::cin, darkestsecret);
	(*phone).ft_new(i, firstname, lastname, nickname, phonenumber, darkestsecret);
}

void ft_search(PhoneBook *phone){
	int i = 0;
	std::string bob;
	bool bird = false;
	(*phone).ft_print_table();
	while (!bird){
		std::cout << "Please, enter the number of the contact " << std::endl;
		std::getline(std::cin, bob);
		if (isdigit(bob[0]))
			i = std::stoi(bob);
		if (i >= 9 || i < 1)
			std::cout << "Invalid input" << std::endl;
		if (i > 0 && i < 9)
			bird = true;
	}
	(*phone).search_con(i);
}

int main (void)
{
	bool check = true;
	int i = 1;
	std::string command;
	PhoneBook phone;
	while (!std::cin.eof()){
		if (check){
			std::cout << "Please, enter one of the commands: ADD, SEARCH or EXIT\n";
			check = false;
		}
		std::getline(std::cin, command);
		if (command == "EXIT")
			return (0);
		else if (command == "ADD"){
			ft_add(&phone, i);
			check = true;
			i++;
			if ( i == 9){
				std::cout << "Your next contact would replace the first one in the list" << std::endl;
				i = 1;
			}
		}
		else if (command == "SEARCH"){
			ft_search(&phone);
			check = true;
		}
	}
	return(0);
}