// Function_Overloading
//-------------------------------

#include<bits/stdc++.h>
using namespace std;
class A {
public:
	void display(int a, int b) {
		cout << "This is two integer" << endl;
	}
	void display(int a) {
		cout << "This is one integer" << endl;
	}
	void display(double a) {
		cout << "This is one double" << endl;
	}
	void display(double a, double b) {
		cout << "This is two double" << endl;
	}
};

int main() {
	A object;
	object.display(10, 15);
	object.display(25);
	object.display(845.5654);
	object.display(54.53, 5345.4);

	return 0;
}