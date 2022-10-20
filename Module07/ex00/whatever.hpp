#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>
#include <string>

template <typename T>
void swap(T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
const T& min(const T& x, const T& y)
{
	if (x < y)
		return (x);
	if (y < x)
		return (y);
	return (y);
}

template <typename T>
const T& max(const T& x, const T& y)
{
	if (x > y)
		return (x);
	if (y > x)
		return (y);
	return (y);
}
#endif
