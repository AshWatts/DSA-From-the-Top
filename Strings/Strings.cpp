#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1 = "Hello World";

    cout << s1 << endl;

    s1 = "Hello World Again ";

    cout << s1 << endl;

    string s2 = "From the other side";

    cout << s2 << endl;

    cout<<"Combined: "<<s1 + s2<<endl;

    cout<<"Length of s1: "<<s1.length()<<endl;
    cout<<"Length of s2: "<<s2.length()<<endl;

    string s4;
    cout<<"Enter a string: ";
    getline(cin, s4);
    cout<<"You entered: "<<s4<<endl;

    string s3;
    cout<<"Enter a string: ";
    cin>>s3;
    cout<<"You entered: "<<s3<<endl;

    return 0;
}