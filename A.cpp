// Normal class and object-1
//-------------------------------
#include<bits/stdc++.h>
using namespace std;

class Car {
public:
	string brand, model;
	int milage = 0;

	void distance(int x) {
		milage += x;
	}

	void show() {
		cout << "Brand Name: " << brand << endl;
		cout << "Model Name: " << model << endl;
		cout << "Milage: " << milage << endl;
		cout << endl;
	}
};

int main() {
	Car car1, car2;
	car1.brand = "BMW";
	car1.model = "bmw111";
	car1.distance(149);
	car1.show();

	car2.brand = "Toyota";
	car2.model = "toyota321";
	car2.distance(219);
	car2.show();


	return 0;
}