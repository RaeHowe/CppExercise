#include <iostream>

using namespace std;

int b = 20;

namespace raehowe2{

    int c = 30;
}

namespace raehowe{
    int a = 10;

    class Student {
    public:
        string s_name;
        int s_age;
        void show();
    };

    void Student::show() {
        using raehowe2::c; //使用命名空间raehowe2中的c变量
        cout << "Name: " << s_name << endl;
        cout << "Age: " << s_age + b + c<< endl;
    }

    void show(){
        cout << "Hello, world!" << endl;
    }
}



int main() {

    using raehowe::Student; //使用命名空间raehowe中的Student类

    Student s1;
    s1.s_name = "John";
    s1.s_age = 10;
    s1.show();

    raehowe::show();

    return 0;
}