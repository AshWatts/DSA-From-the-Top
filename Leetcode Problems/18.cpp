#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i=0; i<n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            for(int j=i+1; j<n; ) {

                int k = j+1;
                int l = n-1;

                while(k < l) {
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l];

                    if(sum == target) {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]}); 
                        k++;
                        l--;
                        while(k < l && nums[k] == nums[k-1]) {
                            k++;
                        }
                    }
                    else if(sum < target) {
                        k++;
                    }
                    else {
                        l--;
                    }
                }
                j++;
                while(j < n && nums[j] == nums[j-1]) {
                    j++;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> ans = obj.fourSum(nums, target);
    for(auto v: ans) {
        for(auto ele: v) {
            cout << ele << " ";
        }
        cout << endl;
    }
}