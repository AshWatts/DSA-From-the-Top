#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin>>str;

    int n = str.length();
    int i = 0;
    int j = n-1;

    while(i < j) {
        swap(str[i++], str[j--]);                       // Shorter way to use i++ and j-- in the same line
    }

    cout << "Reversed string: " << str << endl;
    return 0;
}