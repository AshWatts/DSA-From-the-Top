#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    q.push(1);
    q.push(2);
    q.push(3);

    cout<<"Front: "<<q.front()<<endl;
    cout<<"Back: "<<q.back()<<endl;

    q.pop();
    cout<<"Front: "<<q.front()<<endl;

    cout<<"Size: "<<q.size()<<endl;

    cout<<"Is queue empty: "<<q.empty()<<endl;

    return 0;
}