#include <iostream>
#include "callback.h"

Callback::Callback(std::string name)
{
	this->name = name;
}


void Callback::operator()()
{
	std::cout << "hello, " << name << "!" << std::endl;
}


