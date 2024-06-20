#include <iostream>

using namespace std;

int main() {

    double a = 3.1415;
    // long b = a; // error: narrowing conversion of 'double' to 'long' inside { }
    long b = static_cast<long>(a);

    cout << "b =" << b << endl;

    int c = 10;

    // double *d = static_cast<double*>(&c); staic_cast不支持不同类型的指针之间进行转换

    void *e = &c; //先转换成void*的指针
    double *f = static_cast<double*>(e); // 指针类型转换

    return 0;
} 