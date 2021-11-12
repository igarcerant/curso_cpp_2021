#include <iostream>
#include <thread>
#include <string>
#include <vector>
#include <algorithm>

template<typename lambda, typename arg>
void repeat(int times, lambda code, arg value) {
	times = (times<0)?0:times;
	for(int i=0; i<times; i++) {
		code(value);
	}
}

auto main() -> int
{
	auto lambda = [](std::string name, int times) {
		repeat(times, [](std::string name) {
				std::cout << "hello, " << name << "!" << std::endl;
			}, name);
		return 0;
	};
	std::vector<std::thread> hilos;
	hilos.push_back(std::move(std::thread(lambda, "world", 3)));
	hilos.push_back(std::move(std::thread(lambda, "mexico", 5)));
	hilos.push_back(std::move(std::thread(lambda, "colombia", 4)));
	std::for_each(hilos.begin(), hilos.end(), [](auto &it) {
			it.join();
		});
}



