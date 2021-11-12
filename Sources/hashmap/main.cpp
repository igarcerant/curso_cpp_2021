#include <map>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

auto main() -> int
{
  string word;
  map<string,string> tr;
  tr["hello"] = "hola";
  tr["bye"] = "chao";
  tr["good morning"] = "buenos dias";
  tr["good"] = "bueno";
  cout << "dime una palabra en ingles y te la  digo en español" << endl;
  cout << "? " << std::flush;
  cin >> word;
  cout << tr[word] << endl;
}
