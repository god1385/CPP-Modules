#include "Fixed.hpp"

const int Fixed::integer = 8;
Fixed::~Fixed(){
	std::cout <<"Destructor called" << std::endl;
}

bool Fixed::operator>(const Fixed& origin) const{
	return(this->value > origin.getRawBits());
}

bool Fixed::operator<(const Fixed& origin) const{
	return(this->value < origin.getRawBits());
}

bool Fixed::operator>=(const Fixed& origin) const{
	return(this->value >= origin.getRawBits());
}

bool Fixed::operator<=(const Fixed& origin) const{
	return(this->value <= origin.getRawBits());
}

bool Fixed::operator==(const Fixed& origin) const{
	return(this->value == origin.getRawBits());
}

bool Fixed::operator!=(const Fixed& origin) const{
	return(this->value != origin.getRawBits());
}

Fixed& Fixed::operator++()
{
	this->value++;
   return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.setRawBits(this->value++);
	return(temp);
}

Fixed& Fixed::operator--()
{
	this->value--;
   return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp.setRawBits(this->value--);
	return(temp);
}

Fixed Fixed:: operator+(const Fixed &op) const
{
	Fixed temp = *this;
	temp.setRawBits(this->value + op.getRawBits());
	return(temp);
}

Fixed Fixed:: operator-(const Fixed &op) const
{
	Fixed temp = *this;
	temp.setRawBits(this->value - op.getRawBits());
	return(temp);
}

Fixed Fixed:: operator*(const Fixed &op) const
{
	Fixed temp = *this;
	temp.setRawBits((this->value * op.getRawBits()) >> this->integer);
	return(temp);
}

Fixed Fixed:: operator/(const Fixed &op) const
{
	Fixed temp = *this;
	temp.setRawBits((this->value / op.getRawBits()) >> this->integer);
	return(temp);
}

int Fixed::setRawBits(int const raw){
	value = raw;
	return(value);
}

Fixed::Fixed(const float point){
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(point * (1 << this->integer));
}

Fixed::Fixed(const int copy){
	std::cout << "Int constructor called" << std::endl;
	value = copy << this->integer;
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
	this->value = op.value;
	return(*this);
}

float Fixed::toFloat( void ) const
{
	return((float)this->value / (1 << this->integer));
}

int Fixed::toInt( void ) const{
	return(this->value >> this->integer);
}

Fixed& Fixed::min(Fixed &a, Fixed &b){
	if (a >= b)
		return b;
	return a;
}

Fixed& Fixed::max(Fixed &a, Fixed &b){
	if (a >= b)
		return a;
	return b;
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b){
	if (a >= b)
		return b;
	return a;
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b){
	if (a >= b)
		return a;
	return b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& oper){
    os << oper.toFloat();
    return os;
}

