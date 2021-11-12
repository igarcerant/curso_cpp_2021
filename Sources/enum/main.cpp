#include <iostream>

enum class Numero : int
{
	Zero = 0,
	One,
	Two,
	Three,
	Four,
	Five
};

auto main() -> int
{
	Numero n = Numero::Three;
	std::cout << "n = " << static_cast<int>(n) << std::endl;
	switch(n) {
	case Numero::Zero:
	case Numero::One:
	case Numero::Two:
		std::cout << "casos manejados" << std::endl;
	default:
		std::cout << "caso sin manejar" << std::endl;
	}
}

