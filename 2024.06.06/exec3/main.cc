#include <iostream>
#include <typeinfo>

using namespace std;

int main() {

    int i = 3;
    
    cout << "The type of i is " << typeid(i).name() << endl;

    if (typeid(int) == typeid(i)){
        cout << "i is an int" << endl;
    }

    return 0;
}