#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string p) {
        while(s.find(p) < s.size()) {
            s.erase(s.find(p), p.size());
        }
        return s;
    }
};

int main() {
    Solution obj;
    string s = "daabcbaabcbc", p = "abc";
    cout << obj.removeOccurrences(s, p);
}