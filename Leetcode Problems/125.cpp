#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j) {
            if(!isalnum(s[i])) {
                i++;
            }

            if(!isalnum(s[j])) {
                j--;
            }
            
            if(tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

int main() {
    string s1 = "aahhaa";
    string s2 = "aruiyfvyubvr";

    Solution obj;
    cout<<obj.isPalindrome(s1)<<endl;
    cout<<obj.isPalindrome(s2)<<endl;

    return 0;
}