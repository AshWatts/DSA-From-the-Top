#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        // next_permutation(nums.begin(), nums.end());                           // Directly gives final answer
        int n = nums.size();
        int pivot = -1;

        //Find Pivot
        for(int i=n-2;i>=0;i--) { 
            if(nums[i] < nums[i+1]) {
                pivot = i;
                break;
            }
        }

        if(pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        //Next larger element to swap pivot with
        for(int i=n-1;i>pivot;i--) {
            if(nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        //Reverse the subarray pivot+1 to n-1
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};

int main() {
    Solution s;
    vector<int> nums = {1,2,3};
    s.nextPermutation(nums);
    for(int i=0;i<nums.size();i++) {
        cout<<nums[i]<<" ";
    }
    return 0;
}