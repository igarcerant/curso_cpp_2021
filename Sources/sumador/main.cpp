#include <iostream>
#include <functional>

int suma(int a, int b)
{
	return a + b;
}

std::function<int(int)> make_sumador(int k)
{
	using namespace std::placeholders;
	return std::bind(suma,k,_1);
}

int f1(int a, int b)
{
	return 10*a + b;
}

auto main() -> int
{
	using namespace std::placeholders;
	auto fn = make_sumador(100);
	for (int n=1; n<=10; n++) {
		std::cout << "fn(" << n << ") = " << fn(n) << std::endl;
	}
	auto fvolteada = std::bind(f1,_2,_1);
	for (int n=0; n<10; n++) {
		std::cout << "f1(" << 3 << "," << n << ") = " << fvolteada(3,n) << std::endl;
	}
}

