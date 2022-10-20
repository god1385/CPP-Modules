#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
class MateriaSource: public IMateriaSource
{
private:
AMateria *equip[4];
public:
virtual ~MateriaSource();
MateriaSource();
virtual void learnMateria(AMateria* element);
virtual AMateria* createMateria(std::string const & type);
};

#endif 
