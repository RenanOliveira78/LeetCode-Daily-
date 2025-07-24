#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        



        return  0;
    }
};


void PrintList(ListNode* l) {
    while(l != nullptr) {
        cout << l->val;
        if(l->next != nullptr) {
            cout << " -> ";
        }
        l = l->next;
    }
    cout << endl;
};


int main() {
    
    ListNode* l1_node3 = new ListNode(3);
    ListNode* l1_node2 = new ListNode(4, l1_node3);
    ListNode* l1_head = new ListNode(2, l1_node2);

    ListNode* l2_node3 = new ListNode(4);
    ListNode* l2_node2 = new ListNode(6, l2_node3);
    ListNode* l2_head = new ListNode(5, l2_node2);

    cout << "list 1: ";
    PrintList(l1_head);

    cout << "list 2: ";
    PrintList(l2_head);

    return 0;
}