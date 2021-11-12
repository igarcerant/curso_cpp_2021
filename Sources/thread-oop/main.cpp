#include <iostream>
#include <thread>
#include <string>

class Salutator
{
	public:
		void saludar(std::string name, int times);
};

void Salutator::saludar(std::string name, int times)
{
	for(int i=0; i<times; i++) {
		std::cout << i << ": hello, " << name << "!" << std::endl;
	}
}


auto main() -> int
{
	Salutator salut;
	std::thread th(&Salutator::saludar, salut, "mexico", 5);
	th.join();
}




