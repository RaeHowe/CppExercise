#include <iostream>

using namespace std;

class Base{
public:
    int b_data;
    Base(){
        cout << "Base()" << endl;
    }

    Base(int data): b_data(data){
        cout << "Base(int data)" << endl;
    }

    ~Base(){
        cout << "~Base()" << endl;
    }
};

 class Extend: public Base{
public:
    int e_data;
    Extend(): e_data(10), Base(20){ //这里没有调用基类的默认构造函数
        cout << "Extend()" << endl;
    }

    ~Extend(){
        cout << "~Extend()" << endl;
    }
};

int main() {

    Extend e;

    return 0;
}