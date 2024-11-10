#include<iostream>
#include<vector>   
using namespace std;

bool is_valid(vector<int> &b, int k, int n, int mid) {
    int p = 1;
    int t = 0;

    for(int i=0;i<n;i++) {
        if(b[i] > mid) {
            return false;
        }

        if(t + b[i] <= mid) {
            t += b[i];
        }
        else {
            p++;
            t = b[i];
        }
    }
    if(p <= k) {
        return true;
    }
    else {
        return false;
    }
}


int findLargestMinDistance(vector<int> &b, int k) {
    int n = b.size();
    int ans = -1;
    int start = 0;
    int end = 0;

    for(int i=0;i<n;i++) {
        start = max(start, b[i]);
        end += b[i];
    }

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(is_valid(b, k, n, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> b = {10, 20, 30, 40};
    int k = 2;
    cout << findLargestMinDistance(b, k) << endl;
    return 0;
}