#include <iostream>

using namespace std;

template <class T1, class T2>
class Student {
public:
    T1 name;
    T2 age;
    Student(string name, int age): name(name), age(age) {

    }

    void show() const { // const method to show the student's information
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Student<string, int> func(Student<string, int> &aa){
//     aa.show();
//     cout << "Hello, world!" << endl;
//     return aa;
// }

template <typename T1, typename T2>
Student<T1, T2> func(Student<T1, T2> &bb){
    bb.show();
    cout << "Hello, world!" << endl;
    return bb;
}

int main() {

    Student<string, int> student("RaeHowe", 30);
    func(student);

    return 0;
}