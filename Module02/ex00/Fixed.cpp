#include "Fixed.hpp"

const int Fixed::integer = 8;
Fixed::~Fixed(){
	std::cout <<"Destructor called" << std::endl;
}

int Fixed::setRawBits(int const raw)
{
	value = raw;
	return(value);
}

int Fixed::getRawBits(void) const
{
	std::cout <<"getRawBits called" << std::endl;
	return(this->value);
}

Fixed::Fixed(){
	value = 0;
	std::cout <<"Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy){
	std::cout <<"Copy constructor called" << std::endl;
	this->value = copy.value;
}
Fixed &Fixed::operator = (const Fixed &op){
	std::cout <<"Copy assignment called" << std::endl;
	this->value = op.getRawBits();
	return(*this);
}
