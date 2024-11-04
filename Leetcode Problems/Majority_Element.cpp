#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for(int num : nums) {
            if(count == 0) {
                candidate = num;
                count = 1; 
            } 
            else if(num == candidate) {
                count++;
            } 
            else {
                count--;
            }
        }
        return candidate;
    }
};

int main() {
    Solution solution;

    vector<int> nums1 = {3, 2, 3};
    cout << "Test Case 1: " << solution.majorityElement(nums1) << endl; 

    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    cout << "Test Case 2: " << solution.majorityElement(nums2) << endl;

    return 0;
}