#include<iostream>
#include<vector>
using namespace std;

// vector<int> productExceptSelf(vector<int>& nums) {             BRUTE FORCE       
//     vector<int> ans;
//     int n = nums.size();

//     for(int i=0;i<n;i++){
//         int p = 1;
//         for(int j=0;j<n;j++){
//             if(i != j){
//                 p *= nums[j];
//             }
//         }
//         ans.push_back(p);
//     }

//     return ans;
// }

// vector<int> productExceptSelf(vector<int>& nums) {           Semi Optimal Approach (Time O(n), Space O(n))
//     int n = nums.size();
//     vector<int> ans(n,1);
//     vector<int> pr(n,1);
//     vector<int> su(n,1);

//     for(int i=1;i<n;i++){
//         pr[i] = pr[i-1] * nums[i-1];
//     }

//     for(int i=n-2;i>=0;i--){
//         su[i] = su[i+1] * nums[i+1];
//     }

//     for(int i=0;i<n;i++){
//         ans[i] = pr[i] * su[i];
//     }

//     return ans;
// }

vector<int> productExceptSelf(vector<int>& nums) {                // Optimal Approach (Time O(n), Space O(1))
    int n = nums.size();
    vector<int> ans(n,1);
    int pr = 1;
    int su = 1;

    for(int i=1;i<n;i++){
        ans[i] = ans[i-1] * nums[i-1];
    }

    for(int i=n-2;i>=0;i--){
        su *= nums[i+1];
        ans[i] *= su;
    }

    return ans;
}


int main() {
    vector<int> nums1 = {1,2,3,4};
    vector<int> ans1 = productExceptSelf(nums1);
    for(int i=0;i<ans1.size();i++){
        cout << ans1[i] << " ";
    }
    cout << endl;

    vector<int> nums2 = {-1,1,0,-3,3};
    vector<int> ans2 = productExceptSelf(nums2);
    for(int i=0;i<ans2.size();i++){
        cout << ans2[i] << " ";
    }
    cout << endl;

    return 0;
}