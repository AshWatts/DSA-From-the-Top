#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    void get_permutations(vector<int>& nums, int idx, vector<vector<int>>& ans) {
        if(idx == nums.size()) {
            ans.push_back(nums);
            return;
        }

        for(int i=idx; i<nums.size(); i++) {
            swap(nums[i], nums[idx]);
            get_permutations(nums, idx+1, ans);
            swap(nums[i], nums[idx]);
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        get_permutations(nums, 0, ans);
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = s.permute(nums);
    for(auto v: ans) {
        for(auto i: v) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}