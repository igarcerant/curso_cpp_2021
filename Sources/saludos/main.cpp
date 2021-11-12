#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using std::cout;
using std::flush;
using std::endl;
using std::cin;
using std::string;
using std::toupper;

auto logica() -> string
{
  string nombre;
  cout << "dime tu nombre: " << flush;
  cin >> nombre;
  string mensaje = "hola, " + nombre;
  mensaje.push_back('!');
  return mensaje;
}


auto main() -> int
{
  string mensaje = logica();
//
  std::transform(mensaje.begin(),mensaje.begin(),mensaje.end(),[](auto ch){
    return ::toupper(ch);
  });
  cout << mensaje << endl;
}

