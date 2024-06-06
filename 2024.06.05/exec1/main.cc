#include <iostream>

using namespace std;

class Base{
public:
    int b_data;
    Base(){
        cout << "Base()" << endl;
    }

    Base(int data): b_data(data){
        cout << "Base(int data): " << b_data << endl;
    }

    ~Base(){
        cout << "~Base()" << endl;
    }

    void show(){
        cout << "Class Base show()" << endl;
    }

    void show(int a){
        cout << "Class Base show(int a)" << endl; 
    }
};

 class Extend: public Base{
public:
    int e_data;
    Extend(): e_data(10), Base(20){ //这里没有调用基类的默认构造函数
        cout << "Extend()" << endl;
    }

    Extend(int a, int b): e_data(a), Base(b){ //调用基类中带参数的构造函数
        cout << "Extend(int a, int b)" << endl;
    }

    ~Extend(){
        cout << "~Extend()" << endl;
    }

    void show(){
        cout << "Class Extend show()" << endl;
    }
};

int main() {

    Extend e(10, 20);

    e.show();
    // e.show(20); 想调用基类的show方法，但是被遮蔽了

    return 0;
}