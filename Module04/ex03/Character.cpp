#include "Character.hpp"

Character::Character(std::string name){
	this->pers = name;
	for (int i = 0; i < 4; i++)
		this->equipment[i] = 0;
	//std::cout << "Character default constructor called" << std::endl;
}

Character::~Character(){
	//std::cout << "Character default destructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		if(this->equipment[i] != 0)
			delete equipment[i];
	}
}

void Character:: equip(AMateria* m){
	int i = 0;
	while (i < 4){
		if (this->equipment[i] == 0){
			this->equipment[i] = m;
			i++;
			break;
		}
		else
			i++;
	}
}

void Character:: unequip(int idx){
	if (idx < 4 && idx >=0 && this->equipment[idx])
		this->equipment[idx] = 0;
	else
		std::cout << "There is nothing to unequip, try equipping something first" << std::endl;
}

std::string const & Character::getName() const
{
	return(this->pers);
}

void Character::use(int idx, ICharacter& target){
	if (idx < 4 && idx >=0 && this->equipment[idx])
		this->equipment[idx]->use(target);
}
