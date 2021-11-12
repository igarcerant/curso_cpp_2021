#include <iostream>
#include <exception>

using namespace std;



void business()
{
	cout << "hello, world!" << endl;
	cout << "dime 1 si quieres error!" << endl;
	int n;
	cin >> n;
	if (n == 1) {
		throw new exception("el usuario dijo que queria un error");
	}
}

auto main() -> int
{
	try {
		business();
		cout << "ok, todo bien, chao!" << endl;
	} catch(const char* ex) {
		cout << ex << endl;
	}
	cout << "mi progama continua con normalidad" << endl;
}

