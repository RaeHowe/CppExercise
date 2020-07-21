//
// Created by 朱云昊 on 2020/7/21.
//

#include "iostream"

int main(){
    int a = 1;
    int sum = 0;
    while (a <= 10){
        sum += a;
        a++;
    }

    std::cout << "结果为:" << sum << std::endl;
}