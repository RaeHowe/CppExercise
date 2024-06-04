#include<iostream>  //C++输入输出库
using namespace std; //std标准命名空间
#include "CFrog.h"
// #include <conio.h>
// #include <ctime>
 
int main()
{	
	Frog frog2(10,"gray","hama");
	Frog frog3 = frog2;  //类对象赋值  执行拷贝构造
	frog2.jump();
	frog3.jump();
 
    cout << "############" << endl;
	frog3.setName("xiaogongzhu");
	frog2.jump();  //对象调用成员函数
	// frog3.jump();  //对象调用成员函数
	return 0;
}
//带参构造
//拷贝构造
//hamajump
//hamajump
//hamajump
//xiaogongzhujump
//析构函数
//析构函数