#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    s.push(1);
    s.push(2);
    s.push(3);

    cout<<"Top: "<<s.top()<<endl;

    s.pop();
    cout<<"Top: "<<s.top()<<endl;

    cout<<"Size: "<<s.size()<<endl;

    cout<<"Is stack empty: "<<s.empty()<<endl;

    return 0;
}