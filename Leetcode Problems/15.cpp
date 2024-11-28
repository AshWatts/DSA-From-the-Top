#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

// class Solution {                                                                // O(n^3) solution, Bruteforce approach
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>> ans;
//         set<vector<int>> s;

//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 for (int k = j + 1; k < n; k++) {
//                     if (nums[i] + nums[j] + nums[k] == 0) {
//                         vector<int> trip = {nums[i], nums[j], nums[k]};
//                         sort(trip.begin(), trip.end());

//                         if(s.find(trip) == s.end()) {
//                             s.insert(trip);
//                             ans.push_back(trip);
//                         }
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };

// class Solution {                                                                    // O(n^2) solution, Optimized approach
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         set<vector<int>> sol;

//         for (int i = 0; i < n; i++) {
//             int target = -nums[i];
//             set<int> s;

//             for (int j = i + 1; j < n; j++) {
//                 int c = target - nums[j];

//                 if(s.find(c) != s.end()) {
//                     vector<int> trip = {nums[i], nums[j], c};
//                     sort(trip.begin(), trip.end());
//                     sol.insert(trip);
//                 }
//                 s.insert(nums[j]);
//             }
//         }

//         vector<vector<int>> ans(sol.begin(), sol.end()); 
//         return ans;
//     }
// };

class Solution {                                                                      // O(n^2) solution, Two pointer approach          
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }

            int j = i+1;
            int k = n-1;

            while(j < k) {
                if(nums[j] + nums[k] == - nums[i]) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++; 
                    k--;
                    while(j<k && nums[j] == nums[j-1]) {
                        j++;
                    }
                }
                else if(nums[j] + nums[k] < -nums[i]) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        return ans;
    }
};


int main() {
    Solution s;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = s.threeSum(nums);
    for (auto v : ans) {
        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}