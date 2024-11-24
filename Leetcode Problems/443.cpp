#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        int n = chars.size();

        for(int i=0;i<n;i++) { 
            char c = chars[i];
            int count = 0;

            while(i < n && c == chars[i]) {
                count++;
                i++;
            }

            if(count == 1) {
                chars[index++] = c;
            }
            else {
                chars[index++] = c;
                string str = to_string(count);
                for(char dig : str) {
                    chars[index++] = dig;
                }
            }
            i--;
        }
        chars.resize(index);
        return index;
    }
};

int main() {
    Solution obj;
    vector<char> chars = {'a','a','b','b','c','c','c'};

    cout << "Count: " <<obj.compress(chars)<<endl;

    cout<<"Compressed Array: ";
    for(char c : chars) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}