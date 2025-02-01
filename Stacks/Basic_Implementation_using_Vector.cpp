#include<iostream>
#include<vector>
using namespace std;

class Stack {
    vector<int> v;

public:

    void push(int val) {
        v.push_back(val);
    }

    int top() {
        return v[v.size() - 1];
    }

    void pop() {
        v.pop_back();
    }

    bool isEmpty() {
        if(v.size() == 0) {                                      // return v.size == 0
            return true;
        }
        return false;
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