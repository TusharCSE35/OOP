// Copy Constructor
//-------------------------------

#include<bits/stdc++.h>
using namespace std;

class Wall {
private:
	double length, height;
public:
	Wall(double x, double y) {
		length = x;
		height = y;
	}

	Wall(const Wall &obj) {
		length = obj.length;
		height = obj.height;
	}
	double area() {
		return length * height;
	}
};

int main() {
	Wall first(6354.423, 4343.32);
	Wall second = first;

	cout << "First Wall Area: " << first.area() << endl;
	cout << "Second Wall Area: " << second.area() << endl;

	return 0;
}