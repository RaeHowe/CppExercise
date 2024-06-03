#include <iostream>

using namespace std;

class Student {
    static string s_class;
public:
    static string s_name;
    static int s_age;
    // Student():s_name("Peter"), s_age(20) { //构造函数列表
    //     cout << "Hello, new student!" << endl;
    // }
    // Student(string name, int age):s_name(name), s_age(age) { //构造函数列表
    //     // s_name = name;
    //     // s_age = age;
    // }

    Student(string name, int age){ //构造函数列表
        s_name = name;
        s_age = age;
    }

    ~Student() {
        cout << "Goodbye, " << s_name << "!" << endl;
    }

    void initStudent(string n, int a) {
        s_name = n;
        s_age = a;
    }

    static void show(){
        cout << "Hello, my name is " << s_name << " and I am " << s_age << " years old." << endl;
    } 
};

int Student::s_age = 30; //初始化静态成员变量
string Student::s_name = "Peter"; //初始化静态成员变量
string Student::s_class = "C++"; //初始化静态成员变量

int main() {

    Student::show(); //调用静态成员函数

    cout << "Hello, world!" << Student::s_age << endl; //可以不创建类的实例，直接访问静态成员变量
    Student s1("朱云昊", 20);
    s1.show();

    return 0;
}