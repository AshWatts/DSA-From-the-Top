#include<iostream>
#include<list>
using namespace std;

class Stack {
    list<int> ll;

public:

    void push(int val) {
        ll.push_front(val);
    }

    int top() {
        return ll.front();
    }

    void pop() {
        ll.pop_front();
    }

    bool isEmpty() {
        if(ll.size() != 0) {
            return false;
        }
        return true;
    }
};

int main() {
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(67);

    while(!s.isEmpty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}