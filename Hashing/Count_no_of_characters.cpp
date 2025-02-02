#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    string s;
    cin>>s;

    // int hash[26] = {0};                                     // Use hash[256] instead of hash[26] for all ASCII characters
    // for(int i = 0; i < s.length(); i++) {
    //     hash[s[i] - 'a']++;                                 // Use hash[s[i]]++ for all ASCII characters
    // }

    unordered_map<char, int> hash;
    for(int i = 0; i < s.length(); i++) {
        hash[s[i]]++;
    }

    cout<<endl<<"Character -> Frequency"<<endl;
    for(auto i : hash) {
        cout<<i.first<<" -> "<<i.second<<endl;
    }

    int q;
    cin>>q;
    while(q--) {
        char x;
        cin>>x;
        cout<<hash[x]<<endl;     
    }      

    return 0;
}