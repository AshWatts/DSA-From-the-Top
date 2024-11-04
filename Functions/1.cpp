#include<bits/stdc++.h>
using namespace std;

void printHello() {
    cout << "Hello World!" <<endl;
}

int sum(int a, int b){
    return a+b;    
}

int main() {
    printHello();
    printHello();
    printHello();

    cout << sum(1,2) << endl;
    cout << sum(3,4) << endl;
    cout << sum(5,6) << endl;

    return 0;
}