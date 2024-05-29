// Protected Access Modifier
//-----------------------------

#include<bits/stdc++.h>
using namespace std;

class Parent {
protected:
	int num1, num2;
};

class Child: public Parent {
public:
	void add(int x, int y) {
		num1 = x;
		num2 = y;
		cout << "Summation: " << num1 + num2 << endl;
	}
};

int main() {
	Child tushar;
	tushar.add(232, 432);

	return 0;
}