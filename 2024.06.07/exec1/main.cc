#include <iostream>
using namespace std;

template <class DataType>
class Stack{
private:
    int s_size; //栈的容量
    int s_top; //栈顶指针，相当于是数组的索引，如果索引和size相等说明栈满了
    DataType *s_data; //栈数组
public:
    /*栈主要是两个操作: push和pod；另外还需要获取栈是否为空和是否已满的函数*/
    Stack(int n):s_size(n), s_top(0){
        s_data = new DataType[s_size]; //申请栈空间
    }

    ~Stack(){
        delete []s_data; //释放申请的栈空间
        s_data = nullptr;
    }

    bool is_empty(){
        return s_top == 0;
    }

    bool is_full(){
        return s_top == s_size;
    }

    //出栈操作
    DataType pop(){
        if (!is_empty()){
            DataType result = s_data[s_top-1];
            s_top--;
            return result;
        }
    }

    //入栈操作
    void push(const DataType &element){
        if (!is_full()){
            s_data[s_top] = element;
            s_top++; //
        }
    }
};

int main() {

    Stack<string> s(5); //创建栈，容量为5

    s.push("a");
    s.push("b");
    s.push("c");
    s.push("d");


    while (!s.is_empty()){
        cout << s.Stack<string>::pop() << endl; //输出栈顶元素
    }

    return 0;
}