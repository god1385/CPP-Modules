#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0;i < 4; i++)
		this->equip[i] = 0;
	//std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::~MateriaSource(){
	//std::cout << "MateriaSource default destructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		if(this->equip[i] != 0)
			delete equip[i];
	}
}

void MateriaSource::learnMateria(AMateria* element){
	for (int i = 0; i < 4; i++){
		if (this->equip[i] == 0){
			this->equip[i] = element;
			break;
		}
	}
}

AMateria*MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++){
		if (this->equip[i] != 0){
			if (this->equip[i]->getType() == type)
				return(this->equip[i]->clone());
		}
	}
	return (0);
}
