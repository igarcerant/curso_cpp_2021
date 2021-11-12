#include <iostream>
#include "shell.h"


int shell::quit_cmd(std::list<std::string> args)
{
	running = false;
}

void shell::run()
{
	std::string line;
	std::string cmd_name;
	running = true;
	while (running) {
		std::cout << "prompt> " << std::flush;
		std::getline(std::cin,line);
		std::istringstream is(line);
		is >> cmd_name;
		auto it = commands.find(cmd_name);
		if (it != commands.end()) {
			(*it)({});
		} else {
			std::cerr << "command not found" << std::endl;
		}
	}
}



