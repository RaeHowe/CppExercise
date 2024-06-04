#include "CFrog.h"
#include<iostream>
using namespace std;
 
Frog::Frog()   //构造函数没有函数类型
{
	cout<<"默认构造"<<endl;
	height = 5;
	strcpy(color,"green");
	name = (char *)malloc(20);
	memset(name,0,20);
	strcpy(name,"guagua");
}
 
Frog::Frog(int pheight,char pcolor[],char pname[])
{
	cout<<"带参构造"<<endl;
	height = pheight;
	strcpy(color,pcolor);
	name = (char *)malloc(20);
	memset(name,0,20);
	strcpy(name,pname);
}
 
void Frog::jump()
{
	cout<<name<<"jump"<<endl;
}
 
void Frog::eat()
{
	cout<<name<<"eat"<<endl;
	digist();
}
 
void Frog::digist()
{
	cout<<"digist"<<endl;
}
 
//用成员函数去访问成员内部私有变量
//设置名称 重命名
void Frog::setName(char *newName)
{
	name = (char *)malloc(20);
	memset(name,0,20);
	strcpy(name,newName);
}
 
//拷贝构造函数
Frog::Frog(Frog &frog)  //引用与原变量共享一片内存空间
{
	height = frog.height;
	
	name = (char *)malloc(20);
	memset(name,0,20);
	strcpy(name,frog.name);
	
	strcpy(color,frog.color);
	
	cout<<"拷贝构造"<<endl;
}
 
Frog::~Frog()
{
	//释放
	free(name);
	cout<<"析构函数"<<endl;
}