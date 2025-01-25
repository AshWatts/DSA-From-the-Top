#include<iostream>
#include<unordered_map>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* random;

    Node(int data) {
        val = data;
        next = random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL) {
            return NULL;
        }

        unordered_map<Node*, Node*> m;

        Node* nhead = new Node(head->val);
        Node* otemp = head->next;
        Node* ntemp = nhead;
        m[head] = nhead;

        while(otemp != NULL) {
            Node* ctemp = new Node(otemp->val);
            m[otemp] = ctemp;
            ntemp->next = ctemp;

            otemp = otemp->next;
            ntemp = ntemp->next;
        }
        otemp = head;
        ntemp = nhead;

        while(otemp != NULL) {
            ntemp->random = m[otemp->random];
            otemp = otemp->next;
            ntemp = ntemp->next;
        }
        return nhead;
    }
};

int main() {
    Node* head = new Node(7);
    head->next = new Node(13);
    head->next->next = new Node(11);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(1);

    head->next->random = head;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next;
    head->next->next->next->next->random = head;

    Solution obj;
    Node* newhead = obj.copyRandomList(head);

    while(newhead != NULL) {
        cout<<newhead->val<<" ";
        newhead = newhead->next;
    }
    cout<<endl;
    return 0;
}