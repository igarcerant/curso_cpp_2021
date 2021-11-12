#include <iostream>
#include <queue>

class UnObjeto
{
	int amount;
	public:
		UnObjeto(int _amount) {
			amount = _amount;
		}
	public:
		friend  bool operator<(const UnObjeto &a, const UnObjeto &b) {
			return (a.amount < b.amount);
		}
		friend std::ostream& operator<<( std::ostream& out, const UnObjeto &obj) {
			out << "OBJ{ amount: " << obj.amount << "}" << '\n';
			return out;
		}
};

auto main() -> int
{
	std::priority_queue<int> q;
	q.push(4);
	q.push(3);
	q.push(5);
	q.push(2);
	q.push(1);
	for(int i=0; q.size()>0; i++) {
		auto it = q.top();
		std::cout << i << ": " << it << std::endl;
		q.pop();
	}
	std::priority_queue<UnObjeto> p;
	p.push(UnObjeto(100));
	p.push(UnObjeto(300));
	p.push(UnObjeto(90));
	p.push(UnObjeto(400));
	p.push(UnObjeto(1750));
	for(int i=0; p.size()>0; i++) {
		auto it = p.top();
		std::cout << i << ": " << it << std::endl;
		p.pop();
	}
}


