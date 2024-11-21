#include<iostream>
#include<queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(1);
    pq.push(3);
    pq.push(2);

    while(!pq.empty()) {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    pq.push(1);
    pq.push(3);
    pq.push(2);

    cout<<"Top: "<<pq.top()<<endl;

    pq.pop();
    cout<<"Top: "<<pq.top()<<endl;

    cout<<"Size: "<<pq.size()<<endl;

    cout<<"Is priority queue empty: "<<pq.empty()<<endl;

    return 0;
}