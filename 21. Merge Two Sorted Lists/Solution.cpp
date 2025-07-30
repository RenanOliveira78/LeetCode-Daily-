#include <iostream>
#include <memory> 

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// 
// std::ostream& operator<<(ostream& os, const ListNode obj) {
//     os << "AUUUUUUUUUUUUUUUUUUUUU BABY IM PREYING ON YOU TONIGHT " << obj.val ;
//     return os;
// }

class Solution {
public:
    ListNode* mergeTwoLists(ListNode *list1, ListNode *list2) {
        ListNode *l3_tail = nullptr;
        ListNode *l3_head = nullptr;



        if(list1 == nullptr || list2 == nullptr) {
            if(list1 == nullptr && list2 != nullptr){
                cout << "value to add: " << list1->val << endl;
                ListNode *l3_newNode = new ListNode(list1->val);
                l3_head = l3_newNode;
                l3_tail = l3_newNode;
                // increment
                list1 = list1->next;
            } else {
                cout << "value to add: " << list2->val << endl;
                ListNode *l3_newNode = new ListNode(list2->val);
                l3_head = l3_newNode;
                l3_tail = l3_newNode;
                // increment
                list2 = list2->next;
            }

        } else {
            if(list1->val > list2->val) {
                cout << "value to add: " << list2->val << endl;
                ListNode *l3_newNode = new ListNode(list2->val);
                l3_head = l3_newNode;
                l3_tail = l3_newNode;
                // increment
                list2 = list2->next;
            } else {
                cout << "value to add: " << list1->val << endl;
                ListNode *l3_newNode = new ListNode(list1->val);
                l3_head = l3_newNode;
                l3_tail = l3_newNode;
                // increment
                list1 = list1->next;
        }
        }

        // Initializes the resulting list wiht the < number


        while(list1 != nullptr || list2 != nullptr) {
            // checks is any of the lists are done
            if(list1 == nullptr || list2 == nullptr) {
                if(list2 == nullptr){
                    ListNode *l3_newNode = new ListNode(list1->val);
                    l3_tail->next = l3_newNode;
                    l3_tail = l3_newNode;

                    list1 = list1->next;
                } else {
                    ListNode *l3_newNode = new ListNode(list2->val);
                    l3_tail->next = l3_newNode;
                    l3_tail = l3_newNode;

                    list2 = list2->next;
                }
            } else {
                cout << list1->val << " " << list2->val << endl;
                if(list1->val > list2->val) {
                    cout << "value to add: " << list2->val << endl;
                    ListNode *l3_newNode = new ListNode(list2->val);
                    l3_tail->next = l3_newNode;
                    l3_tail = l3_newNode;

                    list2 = list2->next;
                } 
                else {
                    cout << "value to add: " << list1->val << endl;
                    ListNode *l3_newNode = new ListNode(list1->val);
                    l3_tail->next = l3_newNode;
                    l3_tail = l3_newNode;
                    
                    list1 = list1->next;
                }

            }
        }
        return l3_head;
    }

};

int main() {

    ListNode *L1_node3 = new ListNode(4);
    ListNode *L1_node2 = new ListNode(2, L1_node3);
    ListNode *L1_head = new ListNode(1, L1_node2);
    
    ListNode *L2_node3 = new ListNode(4);
    ListNode *L2_node2 = new ListNode(3, L2_node3);
    ListNode *L2_head = new ListNode(1, L2_node2);

    ListNode *L3_head = new ListNode(0);

    // unique_ptr<ListNode> blegh(new ListNode(10));
    // cout << *blegh.get();

    Solution solution;

    //ListNode *mergedLists = solution.mergeTwoLists(nullptr, nullptr);
    ListNode *mergedLists = solution.mergeTwoLists(L3_head, nullptr);

    while(mergedLists) {
        cout << mergedLists->val << " ";
        mergedLists = mergedLists->next;
    }


    return 0;
}