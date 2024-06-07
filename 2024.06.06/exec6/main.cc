#include <iostream>

using namespace std;

template <class T1, class T2> //模板类
class Student{
public:
    T1 name;
    T2 age;
    Student(T1 n, T2 a) : name(n), age(a) {
        cout << "Student created with name: " << name << " and age: " << age << endl;
    }
};

int main() {

    Student<string, int> s1("RaeHowe", 30);

    return 0;
}