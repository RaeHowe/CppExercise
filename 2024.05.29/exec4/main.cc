#include <iostream>

using namespace std;

int main() {

    char name[11] = "yunhao3";

    int length = sizeof(name) / sizeof(char);

    cout << "Length of name: " << length << endl;

    int index = 0;

    while (index < length)
    {
        cout << name[index] << " ";
        index++;
    }
    

    // cout << "Hello, " << name << "!" << endl;

    return 0;
}