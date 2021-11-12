#include <iostream>
#include <thread>
#include <string>
#include <mutex>

std::mutex m;
int coqtel = 0;

auto main () -> int
{
	auto lambda = [](std::string name, int times) {
		std::unique_lock<std::mutex> lk(m);
		for (int i=0; i<times; i++) {
			coqtel = i;
			//
			std::cout << "coqtel=" << coqtel
				<< " i="<< i << ": hello, "
				<< name << "!" << std::endl;
		}
		lk.unlock();
	};
	std::thread th1(lambda, "world", 3);
	std::thread th2(lambda, "mexico", 5);
	std::thread th3(lambda, "colombia", 4);
	//
	// sigue el programa y eventualmente hay que hacer join
	th1.join();
	th2.join();
	th3.join();
}
