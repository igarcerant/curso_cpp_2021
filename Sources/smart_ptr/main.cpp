#include <iostream>
#include <algorithm>

template<typename n>
class puntero
{
public:
  n * ptr;

  puntero(n * other) {
    ptr  = other;
  }
  puntero<n>(const puntero<n>& other)
  : puntero<n>(other.ptr)
  {}

  puntero<n>(puntero<n>&& other)
  : puntero<n>(other.ptr)
  {}

  puntero<n>& operator=(const puntero<n>& other)
  {
    return *this = puntero<n>(other);
  }

  puntero<n>& operator=(puntero<n>&& other)
  {
    std::swap(ptr, other.ptr);
    return *this;
  }

  ~puntero() {
    delete ptr;
  }
};

class quejon
{
public:
  int id;
  quejon(int id) {
    this->id = id;
    std::cout << "quejon creado con id=" << id << std::endl;
  }
  ~quejon() {
    std::cout << "quejon destruido con exito con id=" << id << std::endl;
  }
};



puntero<quejon> otra_funcion(int id)
{
  puntero<quejon> p(new quejon(id));
  return p;
}


auto main() -> int
{
  int i;
  quejon * a = new quejon(7);
  for (i=1; i<=10; i++) {
    puntero<quejon> p = otra_funcion(i*100);
  }
  delete a;
}
