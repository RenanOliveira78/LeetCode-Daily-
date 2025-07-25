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
        int carry = 0;
        ListNode* l3 = new ListNode();
        ListNode* l3_head = l3;

        while(l1 || l2 || carry != 0) {
            int sum = carry;
            if(l1) {
                sum += l1->val;
                l1 = l1->next; 
            }

            if(l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            int digit = sum%10;
            carry = sum / 10;
            
            l3->next = new ListNode(digit);
            l3 = l3->next;
        }
        return l3_head->next;
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

    cout << "the sum of these two numbers is: ";

    Solution solution;

    ListNode* result = solution.addTwoNumbers(l1_head, l2_head);

    PrintList(result);

    return 0;
}