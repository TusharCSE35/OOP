// Encapsulation
//-------------------------------

#include<bits/stdc++.h>
using namespace std;

class Sum {
private:
	int num1, num2;
public:
	void init(int x, int y) {
		num1 = x;
		num2 = y;
	}
	void display() {
		cout << "SUmmation: " << num1 + num2 << endl;
	}
};

int main() {
	Sum A;
	A.init(54, 454);
	A.display();
	return 0;
}