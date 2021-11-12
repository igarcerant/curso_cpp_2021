#include <list>
#include <string>
#include <stack>
#include <algorithm>
#include <iostream>

void evaluation(std::list<std::string> expr, std::stack<int> &result)
{
	std::for_each(expr.begin(), expr.end(), [&result](std::string term){
			if (term == "+") {
				auto a = result.top();
				result.pop();
				auto b = result.top();
				result.pop();
				result.push(a+b);
			} else if (term == "*") {
				auto a = result.top();
				result.pop();
				auto b = result.top();
				result.pop();
				result.push(a*b);
			} else if (term == "neg") {
				auto a = result.top();
				result.pop();
				auto b = -1 * a;
				result.push(b);
			} else {
				auto a = std::stoi(term);
				result.push(a);
			}
		});
}

auto main() -> int
{
	std::list<std::string> expr {"14", "neg", "1", "+", "5", "+", "3", "*"}; //resultado 18
	std::stack<int> result;
	evaluation(expr,result);
	std::cout << "[";
	std::for_each(expr.begin(), expr.end(), [](auto ex){
				std::cout << " " << ex;
			});
	std::cout << "] = [";
	while(!result.empty()) {
		auto it = result.top();
		result.pop();
		std::cout << " " << it;
	}
	std::cout << " ]" << std::endl;
}


