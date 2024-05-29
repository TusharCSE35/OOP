// Abstraction
//-------------------------------

#include<bits/stdc++.h>
using namespace std;
class MobileUser {
public:
	void call() {
		cout << "Hello!" << endl;
	}

	void virtual sendMessage() = 0;
};

class Tushar: public MobileUser {
public:
	void sendMessage() {
		cout << "Hi, I am Tushar Sarkar" << endl;
	}
};

class Nandita: public MobileUser {
public:
	void sendMessage() {
		cout << "Hi, I am Nandita Sarkar" << endl;
	}
};


int main() {
	MobileUser *m;
	Tushar t;
	Nandita n;

	m = &t;
	m->sendMessage();

	m = &n;
	m->sendMessage();
	m->call();

	return 0;
}