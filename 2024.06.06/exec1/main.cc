#include <iostream>

using namespace std;

class Base {
public:
    int b_data;
    virtual void show();
};

void Base::show() {cout << "Base data: " << b_data << endl; }

class Extend: public Base {
public:
    int e_data;
    void show() {
        cout << "Extend data: " << e_data << endl;
    }
};

int main() {

    Extend e;
    e.e_data = 10;

    Base *bp = &e;
    bp->Base::show(); //调用的是基类的show函数

    int tmp;

    return 0;
}