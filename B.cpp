// Normal class and object-2
//-------------------------------

#include<bits/stdc++.h>
using namespace std;

class Room {
public:
	double length, width, height;

	double area() {
		return length * width;
	}
	double volume() {
		return length * width * height;
	}
};

int main() {
	Room room1, room2;
	room1.length = 74.32;
	room1.width = 38.21;
	room1.height = 51.19;
	cout << "Area for room1: " << room1.area() << endl;
	cout << "Volume for room1: " << room1.volume() << endl;

	room2.length = 46.32;
	room2.width = 26.34;
	room2.height = 35.01;
	cout << "Area for room2: " << room2.area() << endl;
	cout << "Volume for room2: " << room2.volume() << endl;


	return 0;
}