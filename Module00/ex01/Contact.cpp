#include "Contact.hpp"
#include "PhoneBook.hpp"

void Contact::searching(){
	if (fn == "" && ln== "" && nn== "" && pn== "" && ds== ""){
		std::cout << "There is no such contact" << std::endl;
	}
	else {
	std::cout << fn << std::endl;
	std::cout << ln << std::endl;
	std::cout << nn << std::endl;
	std::cout << pn << std::endl;
	std::cout << ds << std::endl;
	}
}

void Contact::ft_contact(int i, std::string firtsn, std::string lastt, std::string nickk, std::string numberr, std::string secrett){
	fn = firtsn;
	ln = lastt;
	nn = nickk;
	pn = numberr;
	ds = secrett;
	std::cout << "Contact" << " " << i << std::endl;
	std::cout << fn << std::endl;
	std::cout << ln << std::endl;
	std::cout << nn << std::endl;
	std::cout << pn << std::endl;
	std::cout << ds << std::endl;
}

void Contact::ft_print_one(int i){
	if (fn != "" && ln != "" && nn != "" && pn != "" && ds != ""){
		std::cout<< "         " << i << "|" <<
          	    ft_string(fn) << "|" <<
             	ft_string(ln) << "|" <<
             	ft_string(nn) << std::endl;
	}
}

std::string Contact::ft_string(std::string search){
 	std::string output;

    if (search.length() >= 10) {
        output = search.substr(0, 10);
        output[9] = '.';
    }
    else {
        search.insert(0, 10 - search.size(), ' ');
		return search;
    }
    return output;

}

Contact::Contact(){

}

Contact::~Contact(){

}