#include <string>
#include <iostream>
#include <fstream>

std::string ft_append(std::string text, std::string FileName)
{
	std::ifstream file;
	std::string line;
	file.open(FileName);
	if (!file){
		std::cout << "No such file" << std::endl;
		return (text);
	}
	while (getline(file, line)){
		text.append(line);
		if (text.find("\n"))
			text.push_back('\n');
	}
	
	file.close();
	return(text);

}

void replace(std::string text, std::string s1, std::string s2){
	int i = 0;
	std::ofstream fileReplace;

	i = text.find(s1);
	while (i != -1){
		text.erase(i, s1.length());
		text.insert(i, s2);
		i = text.find(s1);
	}
	fileReplace.open("File.replace");
	fileReplace << text;
	fileReplace.close();
}
int main(void){
	std::string s1;
	std::string s2;
	std::string text;
	std::string FileName;

	std::cout << "Please enter the first string" << std::endl;
	std::getline(std::cin, s1);
	std::cout << "Please enter the second string" << std::endl;
	std::getline(std::cin, s2);
	std::cout << "Please enter the name of the file" << std::endl;
	std::getline(std::cin, FileName);
	if (s1 == "" || s2 == "" || FileName == ""){
		std::cout << "S1, S2 or file name is an empty one, unacceptable" << std::endl;
		return(0);
	}
	text = ft_append(text, FileName);
	replace(text, s1, s2);
	return(0);
}