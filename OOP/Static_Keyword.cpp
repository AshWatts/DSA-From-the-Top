#include<iostream>
using namespace std;

void fun() { 
    int x = 0;                                    // x is a local variable
    static int y = 0;                             // y is a static(Global) variable
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    x++;
    y++;
}

int main() {
    fun();
    cout<<endl;
    fun();
    cout<<endl;
    fun();
    cout<<endl;
}