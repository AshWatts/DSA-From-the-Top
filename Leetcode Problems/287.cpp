#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& n) {
        int slow = n[0];
        int fast = n[0];

        do {
            slow = n[slow];           // slow += 1
            fast = n[n[fast]];        // fast += 2
        } while(slow != fast);

        slow = n[0];

        while(slow != fast) {
            slow = n[slow];           // slow += 1
            fast = n[fast];           // fast += 1
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