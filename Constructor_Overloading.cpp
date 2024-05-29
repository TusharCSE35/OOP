// Constructor Overloading
//-------------------------------

#include<bits/stdc++.h>
using namespace std;
class Demo {
private:
	int num1, num2;
public:
	Demo(int x, int y) {
		cout << "Insite Constructor" << endl;
		num1 = x;
		num2 = y;
		area();
	}
	void area() {
		cout << "Num1: " << num1 << endl;
		cout << "Num2: " << num2 << endl;
		cout << "Area: " << num1*num2 << endl;
	}

	~Demo() {
		cout << "Inside Destructor" << endl;
		area();
	}
};
int main() {
	Demo fisrt(435, 423);
	Demo second(468, 345);
	Demo third(4643, 4324);

	return 0;
}
