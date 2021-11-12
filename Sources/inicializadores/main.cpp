#include <iostream>
#include <vector>

auto main() -> int {
	std::vector<int> v1 {1, 2, 3, 4, 5};
	std::vector<int> v2 { v1.begin(), v1.end() }; 
	std::vector< std::vector<int>::iterator > v3 { v1.begin(), v2.end() };
	std::cout << "v1.size() = " << v1.size() << std::endl;
	std::cout << "v2.size() = " << v2.size() << std::endl;
	std::cout << "v3.size() = " << v3.size() << std::endl; // este es el que dice dos.
}
