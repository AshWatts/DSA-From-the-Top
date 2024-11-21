#include<iostream>
#include<list>
using namespace std;

int main() {
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);

    for(auto i=l.begin();i!=l.end();i++) {
        cout<<*i<<" ";
    }
    cout<<endl;

    l.push_back(4);
    for(auto i=l.begin();i!=l.end();i++) {
        cout<<*i<<" ";
    }
    cout<<endl;

    l.pop_back();
    for(auto i=l.begin();i!=l.end();i++) {
        cout<<*i<<" ";
    }
    cout<<endl;

    l.push_front(4);
    for(auto i=l.begin();i!=l.end();i++) {
        cout<<*i<<" ";
    }
    cout<<endl;

    l.pop_front();
    for(auto i=l.begin();i!=l.end();i++) {
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<"Size: "<<l.size()<<endl;

    cout<<"Is list empty: "<<l.empty()<<endl;

    cout<<"list.begin() = "<<*l.begin()<<endl;
    cout<<"list.end() = "<<*(--l.end())<<endl;

    //Iterators:
    list<int>::iterator it;
    cout<<"Using Iterators: ";
    for(it = l.begin(); it != l.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    //Reverse Iterators:
    list<int>::reverse_iterator it1;
    cout<<"Using Reverse Iterators: ";
    for(it1 = l.rbegin(); it1 != l.rend(); it1++) {
        cout<<*it1<<" ";
    }
    cout<<endl;

    return 0;
}