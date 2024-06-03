#include <iostream>

using namespace std;

int main() {
    int a = 10;

    cout << "&a = " << &a << endl;

    int* ptr = &a;

    cout << "ptr = " << ptr << endl;

    cout << "&ptr = " << &ptr << endl;

    int** ptr_ptr = &ptr;

    cout << "a = " << *ptr_ptr << endl;

    return 0;
}