#include <iostream>
#include <variant>
#include <string>

auto main() -> int
{
	std::variant<int,bool,std::string> v;
	v = 10;
	std::cout << "el variant es " << std::get<int>(v) << std::endl;
}

