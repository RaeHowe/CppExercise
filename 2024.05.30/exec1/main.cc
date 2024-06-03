#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

int main() {

    ListNode* node1 = new ListNode();
    node1->val = 1;

    ListNode* node2 = new ListNode();
    node2->val = 2;

    node1->next = node2;

    cout << node1->val << "##" << node1->next->val << endl;

    return 0;
}