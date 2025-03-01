#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int n = nums.size();
            int i=0;
            while(i<n-1) {
                if(nums[i] == nums[i+1]) {
                    nums[i] *= 2;
                    nums[i+1] = 0;
                    i += 2;
                }
                else {
                    i++;
                }
            }
    
            vector<int> ans(n, 0);
    
            int j=0;
            for(auto num : nums) {
                if(num != 0) {
                    ans[j] = num;
                    j++;
                }
            }
    
            return ans;
        }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 2, 1};
    vector<int> ans = obj.applyOperations(nums);
    for(auto num : ans) {
        cout<<num<<" ";
    }
    return 0;
}