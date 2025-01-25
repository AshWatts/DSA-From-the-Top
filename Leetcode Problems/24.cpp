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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* first = head;
        ListNode* sec = head->next;
        ListNode* prev = NULL;

        while(first != NULL && sec != NULL) {
            ListNode* third = sec->next;

            sec->next = first;
            first->next = third;

            if(prev != NULL) {
                prev->next = sec;
            }
            else {
                head = sec;
            }

            prev = first;
            first = third;

            if(third != NULL) {
                sec = third->next;
            }
            else {
                sec = NULL;
            }
        } 

        return head;
    }
};

int main() {
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    ListNode* newhead = s.swapPairs(head);

    while(newhead != NULL) {
        cout<<newhead->val<<" ";
        newhead = newhead->next;
    }
    cout<<endl;

    return 0;
}