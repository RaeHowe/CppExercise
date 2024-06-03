#include <iostream>

using namespace std;

typedef int raehowe;

int main() {
    // string test = R"(C:\Users\zhuyunhao\Desktop\CppExercise\2024.05.27\exec1\main.cc)";
    char test2[] = "test";
    cout << test2 << endl;
    string str = "hello world, awoeuwaoeb "
        "owubeaoweb woeb aoue wo"
        "bwoe bawoeb awe ";

    cout << str << endl;
    cout << &str << endl;

    //隐式转换，以左边的数据类型为准
    int a = 10.25;
    cout << a << endl;

    raehowe b = 10;
    cout << b << endl;

    return 0;
}