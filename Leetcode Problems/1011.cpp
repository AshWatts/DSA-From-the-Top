#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool is_valid(vector<int>& w, int n, int d, int mid) {
        int curr_d = 1;
        int curr_w = 0;

        for(int i=0;i<n;i++) {
            if(w[i] > mid) {
                return false;
            }

            if(curr_w + w[i] <= mid) {
                curr_w += w[i];
            }
            else {
                curr_d++;
                curr_w = w[i];
            }
        }
        if (curr_d > d) {
            return false;
        }
        else {
            return true;
        }
    }

    int shipWithinDays(vector<int>& w, int d) {
        int ans = -1;
        int n = w.size();
        int start = 0;
        int end = 0;

        if(d > n) {
            return ans;
        }

        for(int i=0;i<n;i++) {
            start = max(start, w[i]);
            end += w[i];
        }

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(is_valid(w, n, d, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> w = {1,2,3,4,5,6,7,8,9,10};
    int d = 5;
    cout<<s.shipWithinDays(w, d)<<endl;
    return 0;
}