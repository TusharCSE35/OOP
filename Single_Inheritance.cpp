// Single Inheritance
//-------------------------------

#include<bits/stdc++.h>
using namespace std;
class A {
public:
	int sum(int x, int y) {
		return x + y;
	}
};
class B: public A {
public:
	void display(int x, int y) {
		int result = sum(x, y);
		cout << "Summation: " << result << endl;
	}
};

int main() {
	B object;
	object.display(10, 15);
	return 0;
}
