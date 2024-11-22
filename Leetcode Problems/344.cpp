#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i=0;
        int j = n-1;

        while(i < j) {
            swap(s[i++], s[j--]);
        }
    }
};

int main() {
    Solution obj344;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    obj344.reverseString(s);
    for(auto i: s) {
        cout << i << " ";
    }
    return 0;
}