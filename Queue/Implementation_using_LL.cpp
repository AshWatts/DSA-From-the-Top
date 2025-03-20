#include<iostream>
#include<vector>
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

class Queue {
    Node* head;
    Node* tail;
public:
    Queue() {
        head = tail = NULL;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        if(isempty()) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop() {
        if(isempty()) {
            cout<<"Cannot pop, Queue is empty!";
            return;
        }
        else {
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }
// 
    int front() {
        if(isempty()) {
            cout<<"Queue is empty!";
            return -1;
        }
        else {
            return head->data;
        }
    }

    bool isempty() {
        return head == NULL;
    }
};

int main() {
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<q.front()<<endl;

    q.pop();

    cout<<q.front()<<endl;

    return 0;
}