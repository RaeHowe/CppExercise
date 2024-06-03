#include <iostream>

using namespace std;

class Student {
    string name;
    int age;
    void sayHello();
    void initStudent(){
        name.clear();
        age = 0;
    }
};

void Student::sayHello() {
    cout << "Hello, my name is " << name << endl;
    cout << "I am " << age << " years old." << endl;
}

int main() {

    Student s1;
    s1.name = "John";
    s1.age = 20;

    s1.sayHello();

    return 0;
}