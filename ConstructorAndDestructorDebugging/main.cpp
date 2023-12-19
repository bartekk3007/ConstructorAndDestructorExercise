#include <iostream>
#include <vector>
#include "X.h"

X glob(2);

X copy(X a)
{
	return a;
}

X copy2(X a)
{
	X aa = a;
	return aa;
}

X& ref_to(X& a)
{
	return a;
}

X* make(int i)
{
	X a(i);
	return new X(a);
}

struct XX
{
	X a;
	X b;
};

int main()
{
	std::cout << "\tZmienne globalne\n";

	X loc(4);
	X loc2 = loc;
	loc = X(5);
	loc2 = copy(loc);
	loc2 = copy2(loc);

	X loc3(6);
	X& r = ref_to(loc);
	delete make(7);
	delete make(8);
	std::vector<X> v(4);

	XX loc4;
	X* p = new X(9);
	delete p;
	X* pp = new X[5];
	delete[] pp;

	std::cout << "\tDestruktor globalny\n";
	return 0;
}