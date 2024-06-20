#include <iostream>
#include <algorithm>

using namespace std;

template <claas T>
class Student {
    T s_score;
    int s_count;

    Student(const T score): s_score(score), s_count(0) {}

    void operator()(const T score){
        if (score > s_score){
            s_count++;
        }
    }
};

int main() {

    vector<int> scores = {80, 70, 90, 60, 85};

    for_each(scores.begin(), scores.end(), Student<int>(80))

    return 0;
}