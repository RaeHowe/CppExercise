
#include <iostream>

using namespace std;
int main() {
    int a = 10;

    const int* ptr_a = &a;

    cout << "a = " << *ptr_a << endl;

    int b = 20;

    ptr_a = &b;

    cout << "a = " << *ptr_a << endl;

    return 0;
}