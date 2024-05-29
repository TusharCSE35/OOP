// Normal class and object-3
//-------------------------------

#include<bits/stdc++.h>
using namespace std;

class  Room {
private:
	double length, width, height;
public:
	void init(double len, double wid, double higt) {
		length = len;
		width = wid;
		height = higt;
	}

	void area() {
		double ara_res;
		ara_res = length * width;
		cout << "Area: " << ara_res << endl;
	}

	void volume() {
		double volume_res;
		volume_res = length * width * height;
		cout << "Volume: " << volume_res << endl;
	}
};


int main() {
	Room room1, room2;
	room1.init(36.43, 42.23, 5.23);
	cout << "For Room1:" << endl;
	room1.area();
	room1.volume();

	room2.init(43.42, 78.23, 32.2);
	cout << "For Room2:" << endl;
	room2.area();
	room2.volume();

	return 0;
}
