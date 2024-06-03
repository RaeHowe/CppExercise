#include <iostream>

using namespace std;

int &func(int &val) {
    val += 10;
    return val;
}

int main() {

    int a = 3;

    int &ra = a;

    int *pa = &a;

    cout << "a = " << &a << endl;
    cout << "&ra = " << &ra << endl;
    cout << "ra = " << ra << endl;
    cout << "pa =" << pa << endl;

    int &rb = func(ra);
    cout << "rb = " << rb << endl;
    cout << "&rb = " << &rb << endl;

    return 0;
}