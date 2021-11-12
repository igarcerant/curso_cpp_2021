#ifndef SHELL_H
#define SHELL_H 1

#include <list>
#include <functional>
#include <string>
#include <map>

class shell
{
	private:
		std::map<std::string, std::function<int(std::list<std::string>)>> commands;
		bool running;
	private:
		int quit_cmd(std::list<std::string> args);
	public:
		shell() {
			insert("quit", std::bind(&shell::quit_cmd,this));
			insert("exit, "std::bind(&shell::quit_cmd,this));
		}
	public:
		void insert(std::string name, std::function<int(std::list<std::string>)> code) {
			commands.insert(name, code);
		}
		void run();
};

#endif /*SHELL_H*/

