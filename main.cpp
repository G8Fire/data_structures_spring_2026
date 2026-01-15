// Name: Dalton Bishop
// Description: Practice GitHub and creating a dog class
// 1/25/2026

#include <iostream>

using namespace std;

class Dog {

private:
	string name;
	int age;
	string breed;
public:
	void setData(string dogName, int dogAge, string dogBreed) {
		name = dogName;
		age = dogAge;
		breed = dogBreed;
	}
	void bark() {
		cout << "Woof! Woof!" << endl;
	}
	void displayInfo() {
		cout << "Name: " << name << ", Age: " << age << ", Breed: " << breed << endl;
	}
	string changeName(string newName) {
		name = newName;
		return name;
	}

};

int main() {

	class Dog myDog;
	myDog.setData("Buddy", 3, "Golden Retriever");
	myDog.bark();
	myDog.displayInfo();
	myDog.changeName("Max");
	myDog.displayInfo();
	// End of program

	return 0;
}
