#include <iostream>

using namespace std;

enum yellow { RED = 5, GREEN, BLUE };

int main() {

    cout << yellow::RED  << endl;

    return 0;
}