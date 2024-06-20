#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v2(v1.begin() + 2, v1.end() - 3);

    for (auto it : v2){
        cout << it << " ";
    }

    return 0;
}