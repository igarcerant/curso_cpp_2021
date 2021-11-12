#include <iostream>
#include "shell.h"
#include "hello.h"


auto main() -> int
{
	shell sh;
	sh.insert("hello", hello_cmd);
	sh.insert("hola", [](std::list<std::string> args){
				std::cout << "hola mundo - version en español" << std::endl;
			});
	sh.run();
}


