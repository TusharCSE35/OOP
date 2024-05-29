// Multiple Inheritance
//-------------------------------

#include<bits/stdc++.h>
using namespace std;
class A {
public:
	void display() {
		cout << "Base class 1" << endl;
	}
};
class B {
public:
	void display2() {
		cout << "Base class 2" << endl;
	}
};
class C: public A, public B {
public:
	void display3() {
		cout << "Derived Class" << endl;
	}
};

int main() {
	C object;
	object.display();
	object.display2();
	object.display3();
	return 0;
}