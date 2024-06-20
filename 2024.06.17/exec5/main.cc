#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> myList = {6, 2, 1, 10, 3};

    myList.reverse(); // 链表反转

    for (auto i : myList) {
        cout << i << " ";
    }

    cout << endl;

    myList.sort(); // 链表排序

    for (auto i : myList) {
        cout << i << " ";
    }

    cout << endl;

    list<int>::iterator myItor = myList.begin(); //创建迭代器

    //跳过两个元素
    myItor++;
    myItor++;

    //插入元素
    myList.insert(myItor, 25);

    for (auto i : myList) {
        cout << i << " ";
    }

    // myList.push_front(15); //在链表头部插入元素

    return 0;
}