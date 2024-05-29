// Constructor Overloading
//-------------------------------

#include<bits/stdc++.h>
using namespace std;

class Room {
private:
	double length, height;
	int num1, num2;
public:
	Room() {
		length = 567.534;
		height = 46.232;
	}
	Room(double x) {
		length = x;
		height = 48.2434;
	}
	Room(int x, int y) {
		num1 = x;
		num2 = y;
	}
	Room(double x, double y) {
		length = x;
		height = y;
	}

	double area() {
		return length * height;
	}
	int sum() {
		return num1 + num2;
	}
};

int main() {
	Room room1, room2(343.234), room3(56454, 4326), room4(53.23, 324.22);
	cout << "For Room Area 1: " << room1.area() << endl;
	cout << "For Room Area 2: " << room2.area() << endl;
	cout << "For Room Sum 3: " << room3.sum() << endl;
	cout << "For Room Area 4: " << room4.area() << endl;


	return 0;
}
