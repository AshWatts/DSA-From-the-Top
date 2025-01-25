#include<iostream>
using namespace std;

class ListNode {
    public:
    int val;
    ListNode* next;

    ListNode(int data) {
        val = data;
        next = NULL;
    }
};
 
class Solution {                                                     // Using Recursion
public: 
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        if(h1 == NULL || h2 == NULL) {
            return h1 == NULL ? h2 : h1; 
        }

        if(h1->val <= h2->val) {
            h1->next = mergeTwoLists(h1->next, h2);
            return h1;
        }
        else {
            h2->next = mergeTwoLists(h1, h2->next);
            return h2;
        }
    }
};

int main() {
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(4);

    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);

    Solution obj;
    ListNode* newhead = obj.mergeTwoLists(head1, head2);

    while(newhead != NULL) {
        cout<<newhead->val<<" ";
        newhead = newhead->next;
    }
    cout<<endl;
    return 0;
}