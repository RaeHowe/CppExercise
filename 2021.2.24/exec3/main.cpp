//
// Created by 朱云昊 on 2021/2/24.
//
#include <iostream>

using namespace std;

//引用基本语法
void test1(){
    int a = 10;
    int &b = a; //&写到等号左侧的话，叫做引用；写到等号右侧的话，叫做取地址。
    //引用相当于b和a指向了同一块内存地址，a或者b发生修改了的话，那么另一个对象也会发生修改。

    b = 20;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//引用必须被初始化，并且引用一旦被初始化之后，就不能被修改了
//void test2(){
//    int &a; 这么写是错误的，引用不能只被声明，而是需要被声明之后马上被初始化
//    a = b;
//}

//对数组建立引用
void test3(){
    int arr[10];
    for (int i = 0; i < 10; i++){
        arr[i] = i;
    }

    //给数组起别名
    int (&pArr)[10] = arr;
    for (int i = 0; i < 10; i++){
        cout << pArr[i] << endl;
    }
}

int main(){
    test3();
}