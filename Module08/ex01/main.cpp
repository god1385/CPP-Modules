#include "Span.hpp"
 
int main(void)
{
	Span span_2 = Span(10001);
    std::vector<int> v;
    for (int i = 0; i < 1000; i++){
        v.push_back(i);
    }
    span_2.number(v.begin(), v.end());
	std::cout << span_2.shortestSpan() << std::endl;
	std::cout << span_2.longestSpan() << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
