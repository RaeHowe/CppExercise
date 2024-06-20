#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <class T>
class Compare {
public:
    bool operator()(const T& a, const T& b){
        return a < b;
    }
};  

int main() {

    // vector<int> v = {8, 1, 29, 10, 5, 2, 3, 15, 7};

    vector<string> v2 = {"g", "a", "b", "c", "d", "e", "f"};

    Compare<string> asc;

    sort(v2.begin(), v2.end(), asc);

    for (auto item: v2 ){
        cout << item << " ";
    }

    return 0;
}