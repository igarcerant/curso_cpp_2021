#include <algorithm>
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

auto main() -> int
{
  string msg = "hola, mundo!";
  std::for_each(msg.begin(), msg.end(), [](char ch){
    cout << ch << endl;
  });
  for (auto &ch: msg) {
    cout << ch << endl;
  }
  for (auto it = msg.begin(); it != msg.end(); it++) {
    cout << *it << endl;
  }
}

