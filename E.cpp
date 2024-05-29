// Hybrid Inheritance
//-------------------------------

#include<bits/stdc++.h>
using namespace std;

class A {
public:
	int a;
	void get_a() {
		cout << "Enter the value of A: ";
		cin >> a;
	}
};

class B: public A {
public:
	int b;
	void get_b() {
		cout << "Enter the value of B: ";
		cin >> b;
	}
};

class C {
public:
	int c;
	void get_c() {
		cout << "Enter the value of C: ";
		cin >> c;
	}
};

class D: public B, public C {
public:
	void mul() {
		get_a();
		get_b();
		get_c();

		int res = a * b * c;
		cout << "Multiplication of A, B and C: " << res << endl;
	}
};

int main() {
	D object;
	object.mul();

	return 0;
}