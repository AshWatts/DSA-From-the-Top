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

class Solution {
public:
    ListNode *breakCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                isCycle = true;
                break;
            }
        }

        if(!isCycle) {
            return NULL;
        }

        slow = head;
        ListNode* prev = NULL;
        while(slow != fast) {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }

        prev->next = NULL;                                          // Breaking the cycle
        return slow;
    }
};

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = head->next->next;

    Solution obj;
    ListNode* newhead = obj.breakCycle(head);

    if(newhead == NULL) {
        cout<<"No Cycle!";
    }
    else {
        cout<<"Cycle Removed!";
    }
    return 0;
}