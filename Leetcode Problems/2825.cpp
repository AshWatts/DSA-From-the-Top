#include<iostream>
using namespace std;

class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i=0;
        int j=0;

        while(i < str1.length() && j < str2.length()) {
            int dif = (str2[j] - str1[i] + 26) % 26;
            
            if(dif == 0 || dif == 1) {
                j++;
            }
            i++;
        }

        return (j==str2.size());
    }
};

int main() {
    Solution obj;
    string str1 = "abc", str2 = "aabbcc";
    string str3 = "abc", str4 = "bc";
    cout << obj.canMakeSubsequence(str1, str2) << endl;
    cout << obj.canMakeSubsequence(str3, str4) << endl;
}