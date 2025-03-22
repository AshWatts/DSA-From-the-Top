#include<iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int currSize, cap;
    int f, r;

public:
    CircularQueue(int size) {
        cap = size;
        arr = new int[cap];
        currSize = 0;
        f = 0;
        r = -1;
    }

    void push(int data) {
        if(currSize == cap) {
            cout<<"Circular Queue is full!"<<endl;
            return;
        }
        r = (r+1) % cap;
        arr[r] = data;
        currSize++;
    }

    void pop() {
        if(isempty()) {
            cout<<"Cicrular Queue is empty!"<<endl;
            return;
        }
        f = (f+1) % cap;
        currSize--;
    }

    int front() {
        if(isempty()) {
            cout<<"Cicrular Queue is empty!"<<endl;
            return -1;
        }
        return arr[f];
    }

    bool isempty() {
        return currSize == 0;
    }
};

int main() {
    CircularQueue cq(5);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.push(5);

    while(!cq.isempty()) {
        cout<<cq.front()<<" ";
        cq.pop();
    }
    cout<<endl;

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.push(4);
    cq.push(5);
    cq.push(6);

    cq.pop();
    cq.pop();

    cq.push(6);

    while(!cq.isempty()) {
        cout<<cq.front()<<" ";
        cq.pop();
    }

    return 0;
}