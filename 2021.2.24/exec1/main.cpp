//
// Created by 朱云昊 on 2021/2/24.
//

#include <iostream>
#include <string>
using namespace std;

#define MAX 1024; //define定义的宏，是没有作用域范围限制的。所以哪里都能获取到。在C++里面，要尽量避免使用define，而要使用const来代替。
//在预处理阶段，就会把MAX替换为1024，所以编译器并不会看到MAX这个宏对象

/*
 * C语言中，默认const是外部链接
 * C++语言中，默认const是内部链接，也就是只有在当前文件中可以被访问
 * */

void test01(){
    //如果常量是被普通变量赋值的话，那么是会分配内存的 --------> 如果是直接分配常量的话，就不会分配内存了
    int a = 10;
    const int b = a;

    int * p = (int *)&b;
    *p = 100;

    cout << "b = " << b << endl;
}

struct Person{
    string name;
    int age;
};

void test02(){
    const Person p1 = {}; //常量为自定义结构体类型的话，也会给该常量分配内存，可以更改内部属性
    Person *p = (Person *)&p1;
    p->name = "剑圣";
    p->age=20;

    cout << p->name << p->age << endl;
}

int main(){
//    extern const int a;
//
//    cout << a << endl;

    test02();
}