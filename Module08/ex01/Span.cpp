#include "Span.hpp"

Span::Span(unsigned int integer)
{
	this->n = integer;
}

Span::~Span()
{

}

Span::Span(const Span& copy)
{
	this->n = copy.n;
	this->numbervector = copy.numbervector;
}

Span &Span::operator = (const Span &op)
{
	this->n = op.n;
	this->numbervector = op.numbervector;
	return(*this);
}

void Span::addNumber(int number){
	if (this->numbervector.size() >= this->n)
		throw Fullspace();
	numbervector.push_back(number);
}

int Span::shortestSpan()
{
	if (this->numbervector.size() == 0 || this->numbervector.size() == 1)
		throw NoNumbers();
	std::sort(this->numbervector.begin(), this->numbervector.end());
	std::vector<int>::const_iterator n; 
	n = this->numbervector.begin();
	int size = numbervector.size();
	int x;
	int* array = new int[size];
	int* arr = new int[size - 1];
	for (int i = 0; i < size; i++){
		x = *n;
		array[i] = x;
		x = *n;
		*n++;
	}
	for (int j = size - 1; j != 0; j--){
		arr[j] = array[j] - array[j - 1];
	}
	int l = size - 1;
	int span = arr[l];
	while(l != 0)
	{
		if (span > arr[l - 1] && arr[l - 1] != 0)
			span = arr[l - 1];
		l--;
	}
	return (span);
}

int Span::longestSpan()
{
	if (this->numbervector.size() == 0 || this->numbervector.size() == 1)
		throw NoNumbers();
	std::sort(this->numbervector.begin(), this->numbervector.end());
	std::vector<int>::const_iterator n; 
	n = this->numbervector.begin();
	std::vector<int>::const_iterator n2; 
	n2 = this->numbervector.end();
	n2--;
	int x = *n;
	int x2 = *n2;
	int span = x2 - x;
	return (span);
}

void Span::number(std::vector<int>::const_iterator it, std::vector<int>::const_iterator itt)
{
	while (it < itt)
	{
		if (this->numbervector.size() >= this->n)
			throw Fullspace();
		addNumber(*it);
		it++;
	}
}
