#include "iostream"
#include <algorithm>
#include <vector>

using namespace std;

void print(int item){
    cout << item << " ";
}

int main() {

    vector<int> array = {1, 2, 3, 4, 5};

    for_each(array.begin(), array.end(), print);

    return 0;
}