#include <iostream>

using namespace std;

// 函数的默认参数
void func(const string &content="Hello, world!"){
    cout << content << endl; 
}

// 函数的默认参数
void func2(int age, const string &message, const string &content = "Hello, world!"){
    cout << "age: " << age << " message: " << message << " content: " << content << endl; 
}

void mySwap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void mySwap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}

void mySwap(double &a, double &b){

}

int main() {

    string a = "hello";
    string b = "world";

    mySwap(a, b);

    cout << "a: " << a << " b: " << b << endl;

    return 0;
}