//
// Created by 朱云昊 on 2021/3/2.
//
#include <iostream>

using namespace std;

//常量的引用
void test1(){
    //int &ref = 10; //引用了不合法的内存，不可以
    const int &ref = 10; //加入const后，编译器处理方式为: int tmp = 10; const int &ref = tmp;

    ref = 10;
}

int main(){

}