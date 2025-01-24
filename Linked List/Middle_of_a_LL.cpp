#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Solution {                                                  // Slow and Fast Pointer Approach
    public:  
    Node* middleNode(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL) {              // && beacuse if fast is NULL then fast->next will not be checked
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

// class Solution {                                                // Counting the number of nodes and then returning the middle node
//     public:
//     Node* middleNode(Node* head) {
//         int count = 0;
//         Node* temp = head;
//         while(temp != NULL) {
//             count++;
//             temp = temp->next;
//         }

//         Node* ans = head;

//         for(int i=0; i<count/2; i++) {
//             ans = ans->next;
//         }
//         return ans;
//     }
// };

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    // head->next->next->next->next->next = new Node(6);

    Solution obj;
    Node* mid = obj.middleNode(head);

    cout<<mid->data<<endl;
    return 0;
}