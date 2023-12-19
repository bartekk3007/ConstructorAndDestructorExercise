#include <iostream>

struct X
{
	int val;

	void out(const std::string& s, int nv)
	{
		std::cerr << this << "->" << s << ": " << val << " (" << nv << ")\n";
	}

	X() // default constructor
	{
		//out("X()", 0);
		std::cout << "Konstruktor domyslny\n";
		val = 0;
	}

	X(int v) // one parameter constructor
	{
		//out("X(int)", v);
		std::cout << "Konstruktor jednoargumentowy\n";
		val = v;
	}

	X(const X& x) // copy constructor
	{
		//out("X(X&) ", x.val);
		std::cout << "Konstruktor kopiujacy\n";
		val = x.val;
	}

	X& operator=(const X& a)
	{
		//out("X::operator=()", a.val);
		std::cout << "Przeciazenie operatora przypisania\n";
		val = a.val;
		return *this;
	}

	~X()
	{
		//out("~X()", 0);
		std::cout << "Destruktor domyslny\n";
	}
};