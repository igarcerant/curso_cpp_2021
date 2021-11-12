#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

template<typename ty>
class Optional
{
	private:
		bool _consult;
		bool _null;
		ty data;
	public:
		Optional(const ty& other) {
			data = other;
			_consult = false;
		}
	public:
		bool is_null() {
			_consult = true;
			return _null;
		}
		ty& get() {
			if (_consult) {
				return data;
			} else {
				cerr << "error" << endl;
				exit(1);
			}
		}
};

auto leer() -> Optional<string>
{
	return Optional<string>("algo se leyo de pantalla");
}

auto main() -> int
{
	Optional<string> op = leer();
	if (op.is_null()) {
		cerr << "hago manejo del error" << endl;
	} else {
		cout << "hago uso del dato: " << op.get() << endl;
	}
}






