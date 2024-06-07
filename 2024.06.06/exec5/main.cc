#include <iostream>

using namespace std;

template <typename T1, typename T2>
auto mySum(T1 a, T2 b) -> decltype(a+b) {
    decltype(a+b) sum = a+b;

    return sum;
}

int main() {

    mySum(1, 2);

    return 0;
}