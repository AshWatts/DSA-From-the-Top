#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int n = nums.size();

        int low = 0;
        int high = n - 1;
        int lower_bound = INT_MAX;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] > t) {
                lower_bound = min(lower_bound, mid);
                high = mid - 1;
            }
            else if(nums[mid] < t) {
                low = mid + 1;
            }
            else {
                return mid;
            }
        }

        if(lower_bound == INT_MAX) {
            lower_bound = n;
        }

        return lower_bound;

    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    cout<<obj.searchInsert(nums, target);

    return 0;
}