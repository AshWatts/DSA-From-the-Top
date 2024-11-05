#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                return mid;
            }

            if(nums[start] <= nums[mid]) {
                if(nums[start] <= target && target <= nums[mid]) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }

            else {
                if(nums[mid] <= target && target <= nums[end]) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    cout<<s.search(nums, target);
    return 0;
}