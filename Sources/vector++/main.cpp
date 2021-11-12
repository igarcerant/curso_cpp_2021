#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

auto main() -> int
{
    vector<int> my_vector;
    my_vector.push_back(10);
    my_vector.push_back(9);
    my_vector.push_back(8);
    cout << my_vector[2] << endl;
    return 0;
}