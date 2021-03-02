//
// Created by 朱云昊 on 2021/3/2.
//
#include <iostream>

using namespace std;

void test(int& ref){
    ref = 100; //ref是引用，转换为*ref=100
}

//引用的本质，就是一个指针常量:*const
int main(){
    int a = 10;
    int& aRef = a; //自动转换为 int* const aRef = &a; 这也能说明引用为什么必须初始化
    aRef = 20; //内部发现先aRef是引用，自动帮我们转换为: *aRef=20;
    cout << "a: " << a << endl;
    cout << "aRef: " << aRef << endl;
    test(a);
    return EXIT_SUCCESS;
}