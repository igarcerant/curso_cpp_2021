#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Tonta
{
    private:
        string name;
    public:
        Tonta(string name) {
            this->name = name;
            cout << "estoy en el constructor: " << name << endl;
        }
        ~Tonta() {
            cout << "estoy en el destructor: " << name << endl;
        }
};


auto main() -> int
{
    Tonta a("a");
    Tonta *b;
    cout << "voy por aqui" << endl;
    b = new Tonta("b");
    cout << "ahora voy por aca" << endl;
    delete b;
    cout << "y ya terminé" << endl;
}

