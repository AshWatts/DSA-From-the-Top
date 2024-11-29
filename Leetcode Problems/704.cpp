#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    int bin_search(vector<int>& nums, int target, int start, int end) {
        if(start > end) {
            return -1;
        }

        int mid = start + (end - start) / 2;

        if(nums[mid] > target) {
            return bin_search(nums, target, start, mid - 1);
        }
        else if(nums[mid] < target) {
            return bin_search(nums, target, mid + 1, end);
        }
        else {
            return mid;
        }
    }

    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        return bin_search(nums, target, start, end);
    }
};

int main() {
    Solution s;
    vector<int> v = {-1,0,3,5,9,12};
    cout << s.search(v, 9) << endl;
    return 0;
}