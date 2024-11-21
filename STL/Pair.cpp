#include<iostream>
using namespace std;

int main() {
    pair<int, char> p;
    p.first = 10;
    p.second = 'A';
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, char> p1(20, 'B');
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int, pair<int, char>> p2;
    p2.first = 30;
    p2.second.first = 40;
    p2.second.second = 'C';
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    return 0;
}