#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> m;
    m["def"] = 2;
    m["ghi"] = 3;
    m["abc"] = 1;

    for(auto i: m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Size: "<<m.size()<<endl;

    cout<<"Is unordered map empty: "<<m.empty()<<endl;

    m.insert({"jkl", 4});

    for(auto i: m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Size: "<<m.size()<<endl;

    cout<<"Count of abc: "<<m.count("abc")<<endl;

    if(m.find("abc") == m.end()) {
        cout<<"abc not found"<<endl;
    }
    else {
        cout<<"abc found"<<endl;
    }

    m.erase("abc");

    if(m.find("abc") == m.end()) {
        cout<<"abc not found"<<endl;
    }
    else {
        cout<<"abc found"<<endl;
    }

    return 0;
}