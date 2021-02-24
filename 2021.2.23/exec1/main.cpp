//
// Created by 朱云昊 on 2021/2/23.
//

#include <iostream>
using namespace std;

namespace KingGlory{
    int libaiId = 10;
}

void test01() {
    int libaiId = 20;

    cout << libaiId << endl;
    //using声明的时候，注意避免二义性
    //下面这行代码说明以后看到的libaiId是用KingGlory下面的libaiId，但是编译器又有就近原则
//    using KingGlory::libaiId;  //这一步叫using声明

//    cout << libaiId << endl; // 这代代码就会抛出错误，因为对象的二义性
}

namespace LOL{
    int libaiId = 30;
}

void test02(){
//    int libaiId = 20;

    //using编译指令
    using namespace KingGlory; //打开房间，但是用不用需要后面再去判断
    using namespace LOL; //打开LOL房间
    cout << libaiId << endl;
}

int main(){
    test02();
}