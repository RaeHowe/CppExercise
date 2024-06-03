#include <iostream>

using namespace std;

int main() {
    int *p_arr = new (std::nothrow)int[5];

    delete []p_arr;

    int *a = new (std::nothrow) int[1000000001];

    if (a == nullptr) {
        cout << "Memory allocation failed" << endl;
    }else {
        cout << "Memory allocation successful" << endl;
    }


    return 0;
}