#ifndef CALLBACK_H
#define CALLBACK_H 1

#include <string>

class Callback
{
	private:
		std::string name;
	public:
		Callback(std::string name);
		void operator()();
};


#endif /*CALLBACK_H*/

