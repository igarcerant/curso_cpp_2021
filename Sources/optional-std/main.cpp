#include <iostream>
#include <optional>

std::optional<std::string> calculo_que_puede_fallar(bool b) {
	if (b) {
		return "este es el resultado en caso de exito";
	} else {
		return {};
	}
}

auto main() -> int
{
	std::optional<std::string> result = calculo_que_puede_fallar(false);
	if (result == std::nullopt) {
		std::cout << "hubo un error" << std::endl;
	} else {
		std::cout << *result << std::endl;
	}
}
