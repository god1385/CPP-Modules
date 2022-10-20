#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

class Span
{
	private:
	unsigned int n;
	std::vector<int> numbervector;
	public:
	Span(unsigned int integer);
	~Span();
	Span(const Span& copy);
	Span& operator = (const Span &op);
	void addNumber(int number);
	int shortestSpan();
	int longestSpan();
	void number(std::vector<int>::const_iterator t1, std::vector<int>::const_iterator t2);
	class Fullspace: public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "The are enough numbers in the container, error";
		}
	};
	class NoNumbers: public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "There are no numbers in the container or there is only one number, error";
		}
	};
};


#endif
