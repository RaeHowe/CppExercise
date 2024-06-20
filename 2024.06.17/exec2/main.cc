#include <iostream>
#include <string>

using namespace std;

int main() {

    string str = "Hello, world!";

    int pos = str.find(",");

    string newStr = str.substr(pos + 1); // get the substring after the comma

    cout << newStr << endl;

    return 0;
}