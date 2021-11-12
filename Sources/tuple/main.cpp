#include <iostream>
#include <tuple>
#include <string>

std::tuple<std::string,int> calculo_con_posibilidad_de_error()
{
	return std::make_tuple("hubo error", 11);
}

auto main() -> int
{
	std::tuple<int,std::string,float,bool> t;
	t = std::make_tuple(0,"Mexico",7.6,false);
	std::cout << "Campos de la tuple" << std::endl;
	std::cout << "ID: " << std::get<0>(t) << std::endl;
	std::cout << "Pais: " << std::get<1>(t) <<  std::endl;
	//
	auto [a,b,c,d] = t;
	std::cout << "el float fue: " << c << std::endl;
	//
	auto [msg, status] = calculo_con_posibilidad_de_error();
	std::cout << "msg: " << msg << std::endl;
	std::cout << "status: " << status << std::endl;
}
