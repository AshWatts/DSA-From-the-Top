#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int b = 10;
    int c = a++;                  // Use and then update
    int d = ++b;                  // Update and then use
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    return 0;
}