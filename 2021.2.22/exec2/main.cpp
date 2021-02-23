//
// Created by 朱云昊 on 2021/2/22.
//

#include "header/game1.h"
#include "header/game2.h"
using namespace std;
#include "iostream"

//当写了匿名命名空间的话，就相当于写了:static a = 1; static b = 2;
//静态变量只能在当前文件中使用
namespace {
    int a = 1;
    int b = 2;
}

namespace testP{
    int m_A = 0;
}

void test01(){
    namespace veryShortName = testP;
    cout << veryShortName::m_A << endl;
}

int main(){
//    WZRY::goAtk();
//
//    cout << LOL::SUB_LOL::l_A << endl;
    test01();
}