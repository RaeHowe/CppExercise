//
// Created by 朱云昊 on 2021/2/24.
//
#include <iostream>

using namespace std;

void test1(){
    int a = 10;
    int &b = a; //&写到等号左侧的话，叫做引用；写到等号右侧的话，叫做取地址。
    //引用相当于b和a指向了同一块内存地址，a或者b发生修改了的话，那么另一个对象也会发生修改。

    b = 20;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main(){
    test1();
}