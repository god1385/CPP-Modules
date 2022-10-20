#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
class Fixed{
	public:

	private:
	int value;
	static const int integer;
	public:
	Fixed();
	Fixed(const Fixed& copy);
	~Fixed();
	Fixed& operator = (const Fixed &op);
	int getRawBits(void) const;
	int setRawBits(int const raw);
};

#endif
