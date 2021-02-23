//
// Created by 朱云昊 on 2021/2/22.
//
#include <iostream>
#ifndef C_WORKSPACE_GAME1_H
#define C_WORKSPACE_GAME1_H

using namespace std;

#endif //C_WORKSPACE_GAME1_H

//命名空间必须定义在全局作用域下
namespace LOL{
    void goAtk();
    int l_A = 20;
    // 命名空间是开放的，可以嵌套
    namespace SUB_LOL{
        int l_A = 30;
    }
}


