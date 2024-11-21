#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin() + 1, 4);                  
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.erase(v.begin() + 1);               // Changes size but not capacity
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // v.clear();                            // Changes size but not capacity
    cout<<"Size: "<<v.size()<<endl;

    cout<<"Is vector empty: "<<v.empty()<<endl;

    cout<<"vec.begin() = "<<*v.begin()<<endl;
    cout<<"vec.end() = "<<*(v.end()-1)<<endl;

    //Iterators:
    vector<int>::iterator it;
    cout<<"Using Iterators: ";
    for(it = v.begin(); it != v.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<endl;

    //Reverse Iterators:
    vector<int>::reverse_iterator it1;
    cout<<"Using Reverse Iterators: ";
    for(it1 = v.rbegin(); it1 != v.rend(); it1++) {
        cout<<*it1<<" ";
    }
    cout<<endl;

    return 0;
}