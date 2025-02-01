#include<iostream>
using namespace std;

int main() {
    string s;
    cin>>s;

    int hash[26] = {0};                                     // Use hash[256] instead of hash[26] for all ASCII characters
    for(int i = 0; i < s.length(); i++) {
        hash[s[i] - 'a']++;                                 // Use hash[s[i]]++ for all ASCII characters
    }

    int q;
    cin>>q;
    while(q--) {
        char x;
        cin>>x;
        cout<<hash[x - 'a']<<endl;                           // Use cout<<hash[x]<<endl; for all ASCII characters
    }

    return 0;
}