// Hierarchical Inheritance
//-------------------------------

#include<bits/stdc++.h>
using namespace std;
class Shape {
public:
	int a, b;
	void init(int x, int y) {
		a = x;
		b = y;
	}
};
class Rectangle: public Shape {
public:
	int area2() {
		int ans = a * b;
		return ans;
	}
};
class Tariangle: public Shape {
public:
	int area() {
		int res = a * b;
		return res;
	}
};

int main() {
	Tariangle t_shape;
	Rectangle r_shape;

	t_shape.init(364, 5435);
	cout << "Rectangle Area: " << t_shape.area() << endl;

	r_shape.init(564, 393);
	cout << "Triangle Area: " << r_shape.area2() << endl;

	return 0;
}
