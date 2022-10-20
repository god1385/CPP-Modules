#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
class Fixed{
	public:

	private:
	int value;
	static const int integer;
	public:
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed();
	Fixed(const Fixed& copy);
	Fixed(const float point);
	Fixed(const int point);
	~Fixed();
	Fixed& operator = (const Fixed &op);
	int getRawBits(void) const;
	int setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& os, const Fixed& oper);

#endif
