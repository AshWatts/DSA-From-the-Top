#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);

    for(int i=0;i<d.size();i++) {
        cout<<d[i]<<" ";
    }
    cout<<endl;

    d.pop_back();
    for(int i=0;i<d.size();i++) {
        cout<<d[i]<<" ";
    }
    cout<<endl;

    d.push_front(4);
    for(int i=0;i<d.size();i++) {
        cout<<d[i]<<" ";
    }
    cout<<endl;

    d.pop_front();
    for(int i=0;i<d.size();i++) {
        cout<<d[i]<<" ";
    }
    cout<<endl;

    cout<<"Size: "<<d.size()<<endl;

    cout<<"Is deque empty: "<<d.empty()<<endl;

    cout<<"deque.begin() = "<<*d.begin()<<endl;
    cout<<"deque.end() = "<<*(d.end()-1)<<endl;

    //Iterators:
    deque<int>::iterator it;
    cout<<"Using Iterators: ";
    for(it = d.begin(); it != d.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    //Reverse Iterators:
    deque<int>::reverse_iterator it1;
    cout<<"Using Reverse Iterators: ";
    for(it1 = d.rbegin(); it1 != d.rend(); it1++) {
        cout<<*it1<<" ";
    }
    cout<<endl;

    return 0;
}