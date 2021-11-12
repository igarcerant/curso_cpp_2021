#include <iostream>

class lloron
{
	private:
		int id;
	public:
		lloron() {
			id = 0;
		}
		lloron(const lloron& other) {
			id = other.id;
		}
		lloron(lloron&& other) {
			id = other.id;
		}
		lloron& operator=(const lloron& other)
		{
			*this = lloron(other);
			return *this;
		}
		lloron& operator=(lloron&& other)
		{
			std::swap(id, other.id);
			return *this;
		}
		lloron(int _id) {
			id = _id;
			std::cout << "ID: " << id << " - lloron construido" << std::endl;
		}
		~lloron() {
			std::cout << "ID: " << id << " - lloron destruido" << std::endl;
		}
	public:
		void show() {
			std::cout << "ID: " << id << " - aqui estoy vivo" << std::endl;
		}
};

lloron make_lloron()
{
	lloron l(2);
	return l;
}

auto main() -> int
{
	lloron l(1);
	lloron l3 = make_lloron();
	l3.show();
}




