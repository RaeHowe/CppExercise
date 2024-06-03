#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

ListNode* reverseList(ListNode* head);

int main() {

    ListNode* head1 = new ListNode();
    ListNode* head2 = new ListNode();
    ListNode* head3 = new ListNode();
    ListNode* head4 = new ListNode();
    ListNode* head5 = new ListNode();
    ListNode* head6 = new ListNode();

    head1->val = 1;
    head1->next = head2;

    head2->val = 2;
    head2->next = head3;

    head3->val = 3;
    head3->next = head4;

    head4->val = 4;
    head4->next = head5;

    head5->val = 5;
    head5->next = head6;

    reverseList(head1);

    cout << "The reversed list is: ";
    cout << head1->val << " ";
    cout << head1->next->val << " ";
    cout << head1->next->next->val << " ";
    cout << head1->next->next->next->val << " ";
    cout << head1->next->next->next->next->val << " ";
    cout << head1->next->next->next->next->next->val << " ";


    return 0;
}

ListNode* reverseList(ListNode* head) {
    if ((head == nullptr) || (head->next == nullptr)){
        return head;
    }

    ListNode* dummyNode = new ListNode();

    dummyNode->val = 0;
    dummyNode->next = nullptr;

    while (head != nullptr)
    {
        ListNode* next = head->next;
        head->next = dummyNode;
        dummyNode = head;
        head = next;
    }
    
    return dummyNode;

}