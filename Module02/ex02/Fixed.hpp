#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>
class Fixed{
	private:
	int value;
	static const int integer;
	public:
	bool operator>(const Fixed& origin) const;
	bool operator<(const Fixed& origin) const;
	bool operator>=(const Fixed& origin) const;
	bool operator<=(const Fixed& origin) const;
	bool operator==(const Fixed& origin) const;
	bool operator!=(const Fixed& origin) const;
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	Fixed operator+(const Fixed &op) const;
	Fixed operator-(const Fixed &op) const;
	Fixed operator*(const Fixed &op) const;
	Fixed operator/(const Fixed &op) const;
	static Fixed& min(Fixed &a, Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static Fixed const& min(Fixed const& a, Fixed const& b);
	static Fixed const& max(Fixed const& a, Fixed const& b);
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
