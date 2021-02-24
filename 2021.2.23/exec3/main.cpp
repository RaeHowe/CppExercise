//
// Created by 朱云昊 on 2021/2/23.
//
#include <iostream>

using namespace std;

const int a = 10;

void test(){
    const int b = 20; //C++的常量的C语言的常量不太一样
    /*
     * C语言中，const修饰的变量，是伪常量，编译器是会分配内存的
     * C++语言中，const不会分配内存
     * */


    int * p = (int *)&b;
    /*
     * 编译器会为对象b临时开辟一块内存空间。
     * int tmp = b;
     * int *p = (int *)&tmp;
     * */
    *p = 200;
    /*
     * *p指向的就是那块临时的空间，临时空间看不到
     * */

    cout << *p << endl;
    cout << b << endl;
}

int main(){
    test();
}