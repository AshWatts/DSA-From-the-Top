#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        vector<int> char_freq(26,0);
        int ans = 0;

        for(char c: s) {
            char_freq[c - 'a']++;
        }

        for(int freq: char_freq) {
            if(freq == 0) {
                continue;
            }
            if(freq % 2 == 0) {
                ans += 2;
            }
            else {
                ans += 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    string str = "aabccabba";
    cout << s.minimumLength(str) << endl;
}