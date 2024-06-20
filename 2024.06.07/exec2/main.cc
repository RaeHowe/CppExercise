#include <iostream>
using namespace std;
#define MAX_SIZE 10

class Array {
private:
    int *items[MAX_SIZE]; 
public:
    Array() {
        memset(items, 0, sizeof(items));//初始化数组元素为0
    }

    ~Array() {
        delete []item;
        item = nullptr;
    }

    int& operator[](int index){
        return items[index];
    }
};

int main() {


    return 0;
}