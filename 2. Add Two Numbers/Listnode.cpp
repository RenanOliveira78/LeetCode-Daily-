#include <iostream>

using namespace std;

// data type
struct ListNode {
    int val;  // declares the value stored in each node
    ListNode *next; // delcares pointer to the next value in the list, nullptr is the last one
    ListNode() : val(0), next(nullptr) {}   // constructors for declaring this structure
    ListNode(int x) : val(x), next(nullptr) {}    
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//node list printer
void printList(ListNode* head) {
    while(head) {
        cout << head->val;
        if(head->next) {cout << " -> ";}
        head = head->next;
    }
    cout << endl;
}


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3_head = nullptr;  // start with empty list
        ListNode* l3_tail = nullptr;  // tail pointer for easy append
        int  carry = 0;
        //while there is a value being pointed at (assumign l1 is the biggest)
        while(l1 || l2 || carry != 0) {
            //checks if any of the numbers represented by the nodeds is empty
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;

            int sum = val1 + val2 + carry;

            carry = sum/10;     //carries the order of magnitude
            int digit = sum % 10; //rest of 10

            // creates a new node every looping lsit for storing the sums
            //appends value and updates nodes
            ListNode* l3_newNode = new ListNode(digit);
            if(l3_head == nullptr) {
                l3_head = l3_newNode;
                l3_tail = l3_newNode;
            } else {
                l3_tail->next = l3_newNode;
                l3_tail = l3_newNode;
            }

            //follows to the next pointer, if not null
            if (l1) {
                l1 = l1->next;
            }
            if (l2) {
                l2 = l2->next;
            }
        }
        return l3_head;
    }
};



int main() {

    //node lists representing number in rever order
    ListNode* l1_node3 = new ListNode(3);
    ListNode* l1_node2 = new ListNode(4, l1_node3);
    ListNode* l1_head = new ListNode(2, l1_node2);

    ListNode* l2_node3 = new ListNode(4);
    ListNode* l2_node2 = new ListNode(6, l2_node3);
    ListNode* l2_head = new ListNode(5, l2_node2);

    cout << "Numbers Stored in the Node List :" << endl;
    cout << "n1: "; printList(l1_head);
    cout << "n2: "; printList(l2_head);
    
    Solution solution;
    ListNode* result = solution.addTwoNumbers(l1_head, l2_head);

    cout << "Sum of n1 and n2: "; printList(result);

    return 0;
}