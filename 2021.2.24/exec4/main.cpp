//
// Created by 朱云昊 on 2021/2/24.
//
#include <iostream>
using namespace std;

//该方法传递地址
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void test1(){
    int a = 1;
    int b = 10;
    swap(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//=======================================================//
//除了上述的方法外，还可以

//该方法叫做引用传递
void swap2(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void test2(){
    int a = 10;
    int b = 20;
    swap2(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main(){
//    test1();
    test2();
}
