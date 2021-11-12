#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::list;

void print(auto start, auto stop)
{
  cout << "[ ";
  std::for_each(start,stop,[](auto it){
    cout << it << ' ';
  });
  cout << "]" << endl;
}

auto main() -> int
{
  list<int> l { 1, 3, 2, 5, 4 };
  vector<int> v { 10, 8, 9, 11, 1, 2 };
  vector<int> m { v.begin(), v.end() };
  print(m.begin(), m.end());
  std::sort(v.begin(), v.end(), [](auto a, auto b){
    return a < b;
  });
  print(v.begin(), v.end());

  if(std::is_sorted(m.begin(), m.end())) {
    cout << "el vector esta ordenado" << endl;
  } else {
    cout << "el vector NO esta ordenado" << endl;
  }



  auto it = std::max_element(v.begin(), v.end());
  cout << *it << endl;


  auto flag = std::all_of(v.begin(), v.end(), [](auto it){
    return (it > 0);
  });
  if (flag) {
    cout << "todos son positivos" << endl;
  } else {
    cout << "no todos son positivos" << endl;
  }

}
