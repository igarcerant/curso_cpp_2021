#include <iostream>
#include <vector>


namespace curso {
	template<class guacamole, class taco>
	void fill(guacamole iter, guacamole end, const taco& value) {
		for(; iter != end; iter++) {
			*iter = value;
		}
	}
	template<class InputIterator, class Lambda>
	void for_each(InputIterator iter, InputIterator end, Lambda fn) {
		for(; iter != end; iter++) {
			fn(*iter);
		}
	}
	template<class InputIterator, class UnaryPredicate>
	bool any_of(InputIterator iter, InputIterator end, UnaryPredicate pred)
	{
		for(; iter != end; iter++) {
			if (pred(*iter)) {
				return true;
			}
		}
		return false;
	}
}

auto main() -> int
{
	std::vector v {1,2,3,4,5};
	curso::fill(v.begin(),v.end(),11);
	curso::for_each(v.begin(),v.end(),[](auto it){
		std::cout << it << std::endl;
	});
	bool flag = curso::any_of(v.begin(), v.end(), [](auto it){
		return (it > 8);
	});
	if (flag) {
		std::cout << "demandamos a la compañia" << std::endl;
	} else {
		std::cout << "los muy ca... se salvan por ahora" << std::endl;
	}
}


