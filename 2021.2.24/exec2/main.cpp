//
// Created by 朱云昊 on 2021/2/24.
//

#include <iostream>
#include <string>
using namespace std;

struct Person{
    string name; //如果需要使用字符串类型的话，需要导入头文件
    int age;
};

int main(){
    Person *per = new Person();
    *per->name = "RaeHowe";
    *per->age = 21;
    cout << per << endl;
}