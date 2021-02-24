//
// Created by 朱云昊 on 2021/2/23.
//

#include <iostream>

using namespace std;


void test03(){
    int a = 10;
    int b = 20;
    cout << "ret = " << (a > b ? a : b) << endl;

    a > b ? a : b = 100; //a > b ? a : b 返回的是变量

    cout << a << endl;
    cout << b << endl;

}

int main(){
    bool a = true;
    cout << a << endl;
    test03();
}