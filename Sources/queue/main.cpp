#include <iostream>
#include <queue>

auto main() -> int
{
	std::queue<int> cola;
	cola.push(1);
	cola.push(2);
	cola.push(3);
	cola.push(4);
	cola.push(5);
	std::cout << cola.front() << std::endl;
	std::cout << cola.back() << std::endl;
	cola.pop();
	std::cout << cola.front() << std::endl;
	std::cout << cola.back() << std::endl;
}


