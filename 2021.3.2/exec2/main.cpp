
//
// Created by 朱云昊 on 2021/3/2.
//

//指针的引用
#include <iostream>

using namespace std;

struct Person{
    int m_Age;
};

void allocatMemory(Person** p ){ //**p 代表了具体的Person对象 *p 代表对象的指针，p代表指针的指针
    *p = (Person*)malloc(sizeof (Person));

    (*p)->m_Age = 100;
}

void test01(){
    Person * p = NULL;
    allocatMemory(&p);
    cout << "p的年龄:" << p->m_Age << endl;
}

int main(){

}