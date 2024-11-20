#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;    

// class Solution {                                    // Brute Force Method
// public:
//     void sortColors(vector<int>& nums) {
//         return sort(nums.begin(), nums.end());
//     }
// };

// class Solution {                                    // Optimised Method
// public:
//     void sortColors(vector<int>& nums) {
//         int c1 = 0;
//         int c2 = 0;
//         int c3 = 0;

//         for(int i : nums) {
//             if(i==0) {
//                 c1++;
//             }
//             else if(i==1) {
//                 c2++;
//             }
//             else {
//                 c3++;
//             }
//         }

//         int index = 0;

//         for(int i=0;i<c1;i++) {
//             nums[index++] = 0;
//         }

//         for(int i=0;i<c2;i++) {
//             nums[index++] = 1;
//         }

//         for(int i=0;i<c3;i++) {
//             nums[index++] = 2;
//         }
//     }
// };

class Solution {                                            // Dutch National Flag Algorithm, Optimised Method
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low, mid, high;
        low = 0;
        mid = 0;
        high = n - 1;

        while(mid <= high) {
            if(nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }

            else if(nums[mid] == 1) {
                mid++;
            }

            else {
                swap(nums[mid], nums[high]);
                high--;
            }

        }
    }
};



int main() {
    Solution s;
    vector<int> nums = {2,0,2,1,1,0};
    s.sortColors(nums);
    for(int i : nums) {
        cout<<i<<" ";
    }
    return 0;
}