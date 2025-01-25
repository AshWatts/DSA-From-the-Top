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
            tail->next = head;
            return;
        }
        else {
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }

    void push_back(int val) {                               // Time Complexity: O(1)
        Node* newnode = new Node(val);
        if(head == NULL) {
            head = tail = newnode;
            tail->next = head;
            return;
        }
        else {
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }

    void pop_front() {                                        // Time Complexity: O(1)
        if(head == NULL) {
            cout<<"Already Empty Linked List!";
            return;
        }
        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        head = head->next;
        tail->next = head;
        temp->next = NULL;

        delete temp;
    }

    void pop_back() {                                         // Time Complexity: O(n)
        if(head == NULL) {
            cout<<"Already Empty Linked List!";
            return;
        }
        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        while(temp->next != tail) {
            temp = temp->next;
        }
        Node* del = tail;
        tail = temp;
        tail->next = head;
        del->next = NULL;
        delete del;
    }

    void display() {                                    // Time Complexity: O(n)
        Node* temp = head;
        while(temp != tail) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }

};

int main() {
    List l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.push_back(40);
    l.push_back(50);
    l.push_back(60);
    l.display();
    l.pop_front();
    l.pop_back();
    l.display();
    return 0;
}