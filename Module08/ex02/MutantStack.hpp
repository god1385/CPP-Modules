# ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <iostream>
#include <string>
#include <stack>
#include <clocale>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
	MutantStack<T>() {} ;
	~MutantStack<T>() {};
	MutantStack<T>(const MutantStack& copy) : std::stack<T>(copy)
	{
	}
	MutantStack<T> &operator = (const MutantStack &op)
	{
		(void)op;
		return(*this);
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(){
		return (std::stack<T>::c.begin());
	}
	
	iterator end(){
		return (std::stack<T>::c.end());
	}

};
# endif
