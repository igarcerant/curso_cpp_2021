#include <iostream>
#include "punto.h"

auto main() -> int
{
	punto c = punto(1,2) + punto(3,4);
	punto d;
	// new style
	std::cout << c << std::endl;
	//
	std::cin >> d;
	std::cout << d << std::endl;
}


