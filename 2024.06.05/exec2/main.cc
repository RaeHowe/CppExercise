#include <iostream>

using namespace std;

class A1{
public:
    int a = 10;
};

class A2{
public:
    int a = 20;
};

class B1: public A1, public A2{
public:
    int a = 30;
};

int main() {

    B1 b1;

    cout << b1.a << b1.A1::a << b1.A2::a << endl;
 
    return 0;
}