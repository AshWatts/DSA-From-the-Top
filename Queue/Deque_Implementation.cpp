#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);
    dq.push_back(5);

    cout<<"Front element: "<<dq.front()<<endl;
    cout<<"Back element: "<<dq.back()<<endl;
    cout<<"Size of deque: "<<dq.size()<<endl;

    while(!dq.empty()) {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    
    return 0;
}