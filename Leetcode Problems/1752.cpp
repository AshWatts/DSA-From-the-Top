#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i=0; i<n-1; i++) {
            if(nums[i+1] < nums[i]) {
                count++;
            }
        }

        if(nums[0] < nums[n-1]) {
            count++;
        }

        return count<=1;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {3,4,5,1,2};
    cout<<obj.check(nums);

    return 0;
}