#include <iostream>

using namespace std;

int execute(int a, int b, int (*pOp)(int, int)){
    int result = pOp(a, b);
    return result;
}

int subtract(int a, int b){
    return a - b;
}

int add(int a, int b){
    return a + b;
}

void test(){
    cout << "Testing..." << endl;
}

int main() {

    int result = execute(10, 5, add);
    cout << "10 + 5 = " << result << endl;

    void (*pFun)();

    pFun = test;

    pFun();

    return 0;
}