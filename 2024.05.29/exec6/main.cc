#include <iostream>

using namespace std;

int main() {
    int a[10];

    int (*p_arr)[10] = &a;

    return 0;
}