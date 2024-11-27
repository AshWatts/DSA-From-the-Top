#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& n) {
        int slow = n[0];
        int fast = n[0];

        do {
            slow = n[slow];
            fast = n[n[fast]];
        } while(slow != fast);

        slow = n[0];

        while(slow != fast) {
            slow = n[slow];
            fast = n[fast];
        }

        return slow;

    }
};

int main() {
    Solution s;
    vector<int> n = {1, 3, 4, 2, 2};
    cout << s.findDuplicate(n) << endl;
    return 0;
}