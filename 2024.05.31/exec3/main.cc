#include <iostream>

using namespace std;

class Student {
    string s_name;
    int s_age;
  public:
    Student():s_name("Peter"), s_age(20) { //构造函数列表
        cout << "Hello, new student!" << endl;
    }
    Student(string name, int age):s_name(name), s_age(age) { //构造函数列表
        // s_name = name;
        // s_age = age;
    }
    ~Student() {
        cout << "Goodbye, " << s_name << "!" << endl;
    }
    void initStudent(string n, int a) {
        s_name = n;
        s_age = a;
    }
    void show(){
        cout << "Hello, my name is " << s_name << " and I am " << s_age << " years old." << endl;
    } 
};

int main() {

    Student s1("朱云昊", 30);
    s1.show();

    Student s2;
    return 0;
}