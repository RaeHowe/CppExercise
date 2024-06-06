#include <iostream>

using namespace std;

class Hero {
public:
    string h_name; //英雄名称
    int h_HP; //血量值
    string h_type; //英雄定位
    string h_skill1; //技能一名称
    string h_skill2; //技能二名称
    string h_big_skill; //大招名称
    virtual void attack1() { //释放技能一
        cout << "释放技能一" << endl;
    }

    virtual void attack2() { //释放技能二
        cout << "释放技能二" << endl;
    }

    virtual void attack3() = 0; //纯虚函数，子类必须实现!!!!
};

class Xiangyu : public Hero {
public:
    string h_name; //英雄名称
    int h_HP; //血量值
    string h_type; //英雄定位
    string h_skill1; //技能一名称
    string h_skill2; //技能二名称
    string h_big_skill; //大招名称
    void attack1() { //释放技能一
        cout << "项羽释放技能一" << endl;
    }

    void attack2() { //释放技能二
        cout << "项羽释放技能二" << endl;
    }

    void attack3() { //释放技能三
        cout << "项羽释放大招" << endl;
    }
};

class Diaochan : public Hero {
public:
    string h_name; //英雄名称
    int h_HP; //血量值
    string h_type; //英雄定位
    string h_skill1; //技能一名称
    string h_skill2; //技能二名称
    string h_big_skill; //大招名称
    void attack1() { //释放技能一
        cout << "貂蝉释放技能一" << endl;
    }

    void attack2() { //释放技能二
        cout << "貂蝉释放技能二" << endl;
    }

    void attack3() { //释放技能三
        cout << "貂蝉释放大招" << endl;
    }
};

int main() {

    Diaochan dc;

    Hero *hero = &dc; //基类指针指向派生类的对象
    hero->attack1();

    Hero *hero2;
    Xiangyu *xy = dynamic_cast<Xiangyu *>(hero); //向下转型，派生类指针指向基类对象
    xy->attack3();

    // Xiangyu xy;

    // Hero *hero2 = &xy;
    // hero2->attack3();

    return 0;
}