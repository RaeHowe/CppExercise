#include <iostream>

using namespace std;

template<typename T>  //函数模板
void Swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

//如果函数名和参数类型、参数个数都满足特化模板函数要求的话，就走特化模板函数的逻辑
template<> void Swap(string& a, string& b){ //特化模板
    cout << "Swap(string& a, string& b)" << endl;
    string temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

template<typename T>  //函数模板
void test(){
    cout << "test()" << endl;
}

class Person{
public:
    template<typename T>  //函数模板
    Person(T a){
        cout << "Person(T a)" << endl;
    }

    template<typename T>  //函数模板
    void show(T b){
        cout << "show(T b)" << endl;
    }
};

int main() {
    string a = "World";
    string b = "Hello";

    Swap<>(a, b);

    return 0;
}