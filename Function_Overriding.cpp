// Function_Overriding
//-------------------------------

#include<bits/stdc++.h>
using namespace std;

class Person {
public:
	void display() {
		cout << "I am a Person" << endl;
	}
};

class Student: public Person {
public:
	void display() {
		cout << "I am a Student" << endl;
	}
};

class Teacher: public Person {
public:
	void display() {
		cout << "I am a Teacher" << endl;
	}
};

int main() {
	Person p;
	p.display();

	Student s;
	s.display();

	Teacher t;
	t.display();

	return 0;
}
