#include<iostream>
#include<vector>    
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int index = m+n-1;
        int i = m-1;
        int j = n-1;
 
        while(i >= 0 && j>=0) {
            if(nums1[i] > nums2[j]) {
                nums1[index--] = nums1[i--];  // Compact way of using index-- and i-- later
            } 
            else {
                nums1[index--] = nums2[j--];  // Compact way of using index-- and j-- later
            }
        }

        while(j>=0) {
            nums1[index--] = nums2[j--];
        }
    }
};

int main() {
    Solution obj;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    obj.merge(nums1, 3, nums2, 3);
    for(int i : nums1) {
        cout << i << " ";
    }
    return 0;
}