#include <iostream>
#include <functional>
#include <string>
#include <map>
#include <typeinfo>

class UnObjeto
{
	public:
		int UnMetodo(std::string name) {
			std::cout << "caso 3 - hello, " << name << "!" << std::endl;
			return 0;
		}
};

int hello_cmd(std::string name)
{
	std::cout << "caso 1 - hello, " << name << "!" << std::endl;
	return 0;
}

auto main() -> int
{
	using namespace std::placeholders;
	// declaramos nuestro hash map de funciones/comandos
	std::map<int, std::function<int(std::string)>> comandos;
	// CASO 1: usando punteros a funcion
	std::function<int(std::string)> ptr1 = hello_cmd;
	comandos.insert({1, ptr1});
	// CASO 2: apuntando a una lambda
	std::function<int(std::string)> ptr2 = [](std::string name) {
		std::cout << "caso 2 - hello, " << name << "!" << std::endl;
		return 0;
	};
	comandos.insert({2, ptr2});
	// CASE 3: apuntar a un metodo cualquiera de un objeto
	UnObjeto obj;
	std::function<int(std::string)> ptr3 = std::bind(&UnObjeto::UnMetodo,&obj,_1);
	comandos.insert({3, ptr3});
	//
	// 2, 3, 1
	int n;
	std::cout << "que version quieres? " << std::flush;
	std::cin >> n;
	auto it = comandos.find(n);
	std::cout << "type of variable 'it': " << typeid(it).name() << std::endl;
	if (it != comandos.end()) {
		it->second("New Zeland");
	} else {
		std::cout << "command not found" << std::endl;
	}
}








