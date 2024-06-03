#include <iostream>

using namespace std;

void func(string name, void* age){
    cout << "Hello, " << name << "!" << endl;
    // cout << "Your age is " << *(int*)age << endl;
    cout << "Your age is " << *(string*)age << endl;
}

int main() {

    string age = "25";

    func("Peter", &age);

    return 0;
}