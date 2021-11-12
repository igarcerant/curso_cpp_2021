#include <iostream>
#include <memory>

class quejon
{
public:
  int id;
  quejon(int id) {
    this->id = id;
    std::cout << "quejon creado con id=" << id << std::endl;
  }
  void saludar() {
    std::cout << "soy id=" << id << " y te digo hola!" << std::endl;
  }
  ~quejon() {
    std::cout << "quejon destruido con exito con id=" << id << std::endl;
  }
};

std::unique_ptr<quejon> otra_funcion(int id)
{
  std::unique_ptr<quejon> p(new quejon(id));
  return p;
}


auto main() -> int
{

  // ejemplo de unique_ptr
  int i;
  quejon * a = new quejon(7);
  for (i=1; i<=10; i++) {
    std::unique_ptr<quejon> p = otra_funcion(i*100);
    p->saludar();
  }
  delete a;


  // ejemplo de shared_ptr
  std::shared_ptr<quejon> sp1 = std::make_shared<quejon>(7865);
  std::shared_ptr<quejon> sp2 = sp1;
  std::shared_ptr<quejon> sp3 = sp2;

}
