#include <iostream>
#include <string>

void invoke(auto lambda, int n)
{
	lambda(n);
}

auto main() -> int
{
	// capturamos la conducta y las variables en una lambda
	std::string name = "Ivan";
	int x = 0;
	auto cb = [name, &x](int value){
		std::cout << "hello, " << name << "!" << std::endl;
		x = value;
	};
	// usamos la lambda y obtenemos el efecto
	invoke(cb, 7);
	std::cout << "x = " << x << std::endl;
}



