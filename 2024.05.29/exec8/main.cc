#include <iostream>

using namespace std;

 struct Man
{
    string name;
    // int age;
    // string address;
};

int main() {
    Man man1;
    man1.name = "John";

    cout << "Name: " << man1.name << endl;

    memset(&man1, 0, sizeof(string));

    man1.name = "Mary";

    cout << "Name: " << man1.name << endl;
    
    return 0;
}