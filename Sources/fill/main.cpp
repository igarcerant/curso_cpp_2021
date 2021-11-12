#include <iostream>
#include <algorithm>
#include <vector>

auto main() -> int
{
	std::vector<int> vc {1,2,3,4};
	std::fill(vc.begin(), vc.end(), 7);
	std::for_each(vc.begin(), vc.end(), [](int it){
			std::cout << it << std::endl;
		});
}


