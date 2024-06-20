#include <iostream>
#include <string>

using namespace std;

int main() {

    string str1("raehowe");

    string str2(str1); // copy constructor 拷贝构造函数

    // 两个变量的内存地址是不同的，因为是深拷贝
    cout << "str1: " << &str1 << endl;
    cout << "str2: " << &str2 << endl;

    string str3(str1, 3, 10);

    cout << "str3: " << str3 << endl;
    cout << "str3 length: " << str3.length() << endl;
    cout << "str3 size: " << str3.size() << endl;
    cout << "str3 capacity: " << str3.capacity() << endl;

//===================下面这俩需要记一下====================
    string str4("raehowe", 30); // 如果想取前三个字符，第一个参数就直接用字符串，如果想取从3开始的子串，就用一个变量
    string str5(str1, 3); 

    cout << "str4: " << str4 << endl;
    cout << "str5: " << str5 << endl;


//======================================================
    string str6(10, 'a');

    cout << "str6: " << str6 << endl;
    return 0;
}