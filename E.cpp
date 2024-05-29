// Parameterized Constructor
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
	double area() {
		return length * height;
	}
};

int main() {
	Wall wall1(3.4, 4.8);
	Wall wall2(46.4, 24.33);

	cout << "Area for wall 1: " << wall1.area() << endl;
	cout << "Area for wall 2: " << wall2.area() << endl;


	return 0;
}