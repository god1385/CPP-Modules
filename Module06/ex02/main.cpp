#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void){
	srand(time(0));
	int i;
	i = rand() % 3 + 1;
	if (i == 1)
	{
		Base *basa = new A;
		std::cout << "A was created" << std::endl;
		return(basa);
	}

	if (i == 2)
	{
		Base *basa = new B;
		std::cout << "B was created" << std::endl;
		return(basa);
	}

	if (i == 3)
	{
		Base *basa = new C;
		std::cout << "C was created" << std::endl;
		return(basa);
	}
	return (0);
}

void identify(Base* p)
{
	A *ap = dynamic_cast<A*>(p);
	B *bp = dynamic_cast<B*>(p);
	C *cp = dynamic_cast<C*>(p);
	if (ap)
		std::cout << "The actual type of the object is A" << std::endl;
	if (bp)
		std::cout << "The actual type of the object is B" << std::endl;
	if (cp)
		std::cout << "The actual type of the object is C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A ap = dynamic_cast<A&>(p);
		std::cout << "The actual type of the object is A, no pointer usage" << std::endl;
	}
	catch (std::exception & e)
	{
			std::cout << "error message: " << e.what() << std::endl;
	}

	try
	{
		B bp = dynamic_cast<B&>(p);
		std::cout << "The actual type of the object is B, no pointer usage" << std::endl;
	}
	catch (std::exception & e)
	{
			std::cout << "error message: " << e.what() << std::endl;
	}

	try
	{
		C cp = dynamic_cast<C&>(p);
		std::cout << "The actual type of the object is C, no pointer usage" << std::endl;
	}
	catch (std::exception & e)
	{
			std::cout << "error message: " << e.what() << std::endl;
	}
}
int main()
{
	Base *basa = generate();
	Base &basa_ = *basa;
	identify(basa);
	identify(basa_);
	delete basa;
	return 0;
}
