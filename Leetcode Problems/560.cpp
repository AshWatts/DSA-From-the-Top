#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// class Solution {                                                    // Brute Force approach, O(n^2) time complexity   
// public:  
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         int ans = 0;

//         for(int i=0; i<n; i++) {
//             int sum = 0;
//             for(int j=i; j<n; j++) {
//                 sum += nums[j];
//                 if(sum == k) {
//                     ans++;
//                 }
//             }
//         }

//         return ans;
//     }
// };

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefix_sum(n, 0);
        int ans = 0;

        prefix_sum[0] = nums[0];
        for(int i=1; i<n; i++) {
            prefix_sum[i] = prefix_sum[i-1] + nums[i];
        }

        // prefix_sum[j] - prefix_sum[i+1] = k
        // prefix_sum[i-1] = prefix_sum[j] - k     , i-1 to simplify
        // Also, prefix_sum[j] = k is another case, so 2 cases in all

        unordered_map<int, int> m;

        for(int j=0; j<n; j++) {
            if(prefix_sum[j] == k) {
                ans++;
            }

            int val = prefix_sum[j] - k;

            if(m.find(val) != m.end()) {
                ans += m[val];
            }

            if(m.find(prefix_sum[j]) == m.end()) {
                m[prefix_sum[j]] = 0;
            }
            m[prefix_sum[j]]++;
        }
        return ans;
    }
};


int main() {
    Solution s;
    vector<int> nums = {1,1,1};
    int k = 2;
    cout << s.subarraySum(nums, k) << endl;
    return 0;
}