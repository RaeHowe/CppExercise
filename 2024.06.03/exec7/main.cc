#include <iostream>

using namespace std;

class Base{
public:
    Base(){
        cout << "Base()" << endl;
    }

    ~Base(){
        cout << "~Base()" << endl;
    }
};

class Extend: public Base{
public:
    Extend(){
        cout << "Extend()" << endl;
    }

    ~Extend(){
        cout << "~Extend()" << endl;
    }
};

int main() {

    Extend e;

    return 0;
}