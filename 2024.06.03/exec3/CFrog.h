#ifndef CFROG_H
#define CFROG_H
 
//成员变量 属性：height color name
//成员函数 行为：jump  eat  digist
 
class Frog
{
public:  
	Frog();  
	Frog(int pheight,char pcolor[],char pname[]);
    Frog(Frog &frog);  //拷贝构造
	~Frog();
    void jump();
	void eat();
	void digist();
	void setName(char *newName);
private:    
	int height;     //高度  
	char color[20]; //颜色  
	char *name;     //名字  
protected:
};
 
#endif