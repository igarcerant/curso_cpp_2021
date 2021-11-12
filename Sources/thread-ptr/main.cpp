#include <iostream>
#include <thread>
#include <string>

void function(std::string name, int times)
{
	for(int i=0; i<times; i++) {
		std::cout << i <<  ": hello, " << name << "!" << std::endl;
	}
}

auto main() -> int
{
	std::thread th(function, "world", 3);
	th.join();
}

