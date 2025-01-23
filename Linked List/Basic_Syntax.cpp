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

class List {
    Node* head;
    Node* tail;

    public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {                             // Time Complexity: O(1)
        Node* newnode = new Node(val);
        if(head == NULL) {
            head = tail = newnode;
            return;
        }
        else { 
            newnode->next = head;                          // (*newnode).next = head;
            head = newnode;
        }
    }

    void push_back(int val) {                               // Time Complexity: O(1)
        Node* newnode = new Node(val);
        if(head == NULL) {
            head = tail = newnode;
            return;
        }
        else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front() {                                        // Time Complexity: O(1)
        if(head == NULL) {
            cout<<"Already Empty Linked List!";
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    } 

    void pop_back() {                                       // Time Complexity: O(n)
        if(head == NULL) {
            cout<<"Already Empty Linked List!";
            return;
        }

        Node* temp = head;
        while(temp->next != tail) {                 // while(temp->next->next != NULL)
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int pos) {                   // Time Complexity: O(n)
        if(pos < 0) {
            cout<<"Invalid Position";
            return;
        }
        if(pos == 0) {
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i=0; i<pos-1; i++) {
            if(temp == NULL) {
                cout<<"Invalid position!"<<endl;
                return;
            }
            temp = temp->next;
        }
        Node* newnode = new Node(val);
        newnode->next = temp->next;
        temp->next = newnode;
    }

    void search(int val) {                             // Time Complexity: O(n)
        int count = 0;
        Node* temp = head;
        while(temp != NULL) {
            if(temp->data == val) {
                cout<<"Position is "<<count+1<<endl;
                return;
            }
            else {
                temp = temp->next;
                count++;
            }
        }
        cout<<"Node DNE!"<<endl;
        return;
    }

    void show() {                                        // Time Complexity: O(n)
        Node* temp = head;
        while(temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};

int main() {
    List ll;

    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(120);

    ll.show();

    ll.push_back(3);
    ll.push_back(745);

    ll.show();

    ll.pop_front();

    ll.show();

    ll.pop_back();

    ll.show();

    ll.insert(22, 3);

    ll.show();

    ll.search(22);

    ll.search(7558);

    return 0;
}