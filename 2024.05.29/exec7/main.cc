#include <iostream>

using namespace std;

 struct Man
{
    string name;
    int age;
    string address;

    Man(string name = "", int age = 0, string address = "") : name(name), age(age), address(address) {}
};


int main() {
    Man man1;
    man1.name = "John";
    man1.age = 30;
    man1.address = "New York";

    Man man3 = {"Jane", 25, "Los Angeles"};

    Man *ptr1 = &man1;

    cout << "Name: " << ptr1->name << endl;

    Man man2 = {"Raehowe", 31, "Beijing"};

    cout << "Name: " << man1.name << endl;
    cout << "Age: " << man1.age << endl;
    cout << "Address: " << man1.address << endl;

    cout << "Name: " << man2.name << endl;
    cout << "Age: " << man2.age << endl;
    cout << "Address: " << man2.address << endl;

    return 0;
}