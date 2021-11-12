#include <iostream>
#include "sumar.h"

using std::cout;
using std::endl;
using std::cin;

auto sumar() -> int
{
	int a, b;
	cin >> a;
	cin >> b;
	int c = a+b;
	cout << a << " + " << b << " = " << c << endl;
	return c;
}



