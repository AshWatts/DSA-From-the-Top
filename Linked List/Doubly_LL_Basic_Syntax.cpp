#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int data) {
        val = data;
        next = prev = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newnode = new Node(val);

        if(head == NULL) {
            head = tail = newnode;
            return;
        }

        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }

    void push_back(int val) {
        Node* newnode = new Node(val);

        if(head == NULL) {
            head = tail = newnode;
            return;
        }

        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop_front() {
        if(head == NULL) {
            cout<<"Already Empty Linked List!";
            return;
        }

        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;

        delete temp;
    }  

    void pop_back() {
        if(head == NULL) {
            cout<<"Already Empty Linked List!";
            return;
        }

        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;

        delete temp;
    }

    void show() {
        Node* temp = head;
        while(temp != NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main() {
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.show();

    ll.push_back(5);
    ll.push_back(6);

    ll.show();

    ll.pop_front();
    ll.pop_back();

    ll.show();

    return 0;
}