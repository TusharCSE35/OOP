// Multilevel Inheritance
//-------------------------------

#include<bits/stdc++.h>
using namespace std;
class A {
public:
	void eating() {
		cout << "For Eating-------------" << endl;
	}
};
class B: public A {
public:
	void reading() {
		cout << "For Reading------------" << endl;
	}
};
class C: public B {
public:
	void sleeping() {
		cout << "For Sleeping-----------" << endl;
	}
};

int main() {
	C object;
	object.eating();
	object.reading();
	object.sleeping();
	return 0;
}