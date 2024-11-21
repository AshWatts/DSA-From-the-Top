#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(auto i = s.begin(); i != s.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    s.erase(3);
    for(auto i = s.begin(); i != s.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;

    cout << "Size: "<< s.size() << endl;
    cout << "Is empty: " << s.empty() << endl;

    s.clear();
    cout << "Size: "<<  s.size() << endl;
    cout << "Is empty: " << s.empty() << endl;

    return 0;
}