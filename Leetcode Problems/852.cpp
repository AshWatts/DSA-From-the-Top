#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        
        // for(int i=1;i<n-1;i++) {                                        // 1st Approach
        //     if(arr[i-1] < arr[i] && arr[i+1] < arr[i]) {
        //         return i;
        //     }
        // }

        // int start = 0;
        // int end = n-1;

        // while(start < end) {                                            // 2nd Approach
        //     int mid = start + (end - start) / 2;

        //     if(arr[mid] < arr[mid+1]) {
        //         start = mid + 1;
        //     }
        //     else {
        //         end = mid;
        //     }
        // }
        // return start;

        int start = 1;
        int end = n-2;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(arr[mid - 1] < arr[mid] && arr[mid+1] < arr[mid]) {
                return mid;
            }

            if(arr[mid] < arr[mid+1]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    Solution s;
    vector<int> arr = {0, 2, 1, 0};
    cout << s.peakIndexInMountainArray(arr) << endl;
}