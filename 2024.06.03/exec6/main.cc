#include <iostream>

using namespace std;

class Base{
public:
    int a;
protected:
    int b;
private:
    int c;
};

class Extend : public Base{
public:
    using Base::b; //改变父类成员的访问权限，使得b可以被访问
};

int main() {

    Extend e;
    e.a = 10;
    e.b = 20;


    return 0;
}