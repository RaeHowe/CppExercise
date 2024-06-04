#include <iostream>

using namespace std;

//运算符重载new
void* operator new(size_t size) {
    void* ptr = malloc(size);
    return ptr;
}

//运算符重载delete
void operator delete(void* ptr) {
    if (ptr != nullptr)
        free(ptr);
}

int main() {



    return 0;
}