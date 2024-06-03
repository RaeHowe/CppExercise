#include "tools.h"

int main() {
    int a = 10;
    int b = 20;

    int* ptr_a = &a;
    int* ptr_b = &b;

    int result = max_test(ptr_a, ptr_b);

    cout << "The maximum value is: " << result << endl;

    return 0;
}
