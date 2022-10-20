#include "Data.hpp"

uintptr_t serialize(Data* ptr){
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return(reinterpret_cast<Data *>(raw));
}

int main(){

	Data *data = new Data;
	Data *check;
	uintptr_t integer;
	data->text = "Checking";
	data->love = 100000;
	std::cout << "data: " << data->text << "; " << data->love <<  std::endl;
	integer = serialize(data);
	check = deserialize(integer);
	std::cout << "check: " << check->text << "; " << check->love <<  std::endl;
	delete data;
	return 0;
}
