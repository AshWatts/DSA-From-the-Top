#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        vector<char> ans;
        int a = 0;

        for(int i=0; i<spaces.size(); i++) {
            int b = spaces[i];

            for(int i=a; i<b; i++) {
                ans.push_back(s[i]);
            }
            ans.push_back(' ');

            a = b;
        }

        for(int i=a; i<s.size(); i++) {
            ans.push_back(s[i]);
        }

        string res(ans.begin(), ans.end());

        return res;
    }
};

int main() {
    string s = "ABC";
    vector<int> spaces = {1, 2};
    Solution obj;
    cout << obj.addSpaces(s, spaces) << endl;
    return 0;
}