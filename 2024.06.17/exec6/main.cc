#include <iostream>
#include <map>
using namespace std;

class Student {
public:
    string s_name;
    int s_age;
    Student(string name, int age): s_name(name), s_age(age) {}

    ~Student() {}
}; 

int main() {
    map<int, Student> tmpMap;

    pair<map<int, Student>::iterator, bool> itor = tmpMap.emplace(1, Student("Alice", 20));
    if (itor.second == false){
        cout << "id1 already exists" << endl;
    }

    pair<map<int, Student>::iterator, bool> itor2 =tmpMap.emplace(2, Student("Peter", 17));
    if (itor2.second == false){
        cout << "id2 already exists" << endl;
    }

    pair<map<int, Student>::iterator, bool> itor3 =tmpMap.emplace(1, Student("Jack", 17));
    if (itor3.second == false){
        cout << "itor3 id1 already exists" << endl;
    }

    for (const auto& item: tmpMap)
        cout << "id: " << item.first << ", name: " << item.second.s_name << ", age: " << item.second.s_age << endl;

    // make_pair(3, Student("Tom", 18)); 构造键值对 

    return 0;
}