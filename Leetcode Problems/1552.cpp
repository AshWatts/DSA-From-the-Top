#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:

    int is_valid(vector<int>& p, int m, int n, int mid) {
        int b = 1;
        int dis = p[0];

        for(int i=1;i<n;i++) {
            if(p[i] - dis >= mid) {
                b++;
                dis = p[i];
            }

            if(b == m) {
                return true;
            }
        }
        return false;   
    }


    int maxDistance(vector<int>& p, int m) {
        sort(p.begin(), p.end());
        int ans = -1;
        int n = p.size();

        int start = 1;
        int end = p.back() - p.front();

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(is_valid(p, m, n, mid)) {
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> p = {1, 2, 3, 4, 7};
    int m = 3;
    cout << s.maxDistance(p, m) << endl;
    return 0;
}