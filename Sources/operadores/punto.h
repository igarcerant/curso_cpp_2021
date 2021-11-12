#ifndef PUNTO_H
#define PUNTO_H 1

#include <iostream>

class punto
{
	private:
		int x;
		int y;
	public:
		punto(){
			x = 0; y = 0;
		}
		punto(int _x, int _y) {
			x = _x;
			y = _y;
		}
	public:
		punto operator+(punto& other) {
			return punto(x + other.x, y + other.y);
		}
		punto operator+(punto other) {
			return punto(x + other.x, y + other.y);
		}
		friend std::ostream& operator<<( std::ostream& out, const punto&self) {
			out << "(" << self.x << "," << self.y << ")";
			return out;
		}
		friend std::istream& operator>>( std::istream& in, punto& self) {
			in >> self.x;
			in >> self.y;
			return in;
		}
};

#endif /*PUNTO_H*/

