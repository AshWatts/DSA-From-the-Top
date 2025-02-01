#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(67);

    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}