#include<iostream> 
#include<vector>
#include<algorithm>
using namespace std;

bool is_valid(vector<int> &s, int k, int n, int mid) {
    int cow = 1;
    int last_pos = s[0];

    for(int i=1;i<n;i++) {

        if(s[i] - last_pos >= mid) {
            cow++;
            last_pos = s[i];
        }

        if(cow == k) {
            return true;
        }
    }
    return false;
}


int aggressiveCows(vector<int> &s, int k)
{
    int n = s.size();
    int ans = -1;

    sort(s.begin(), s.end());

    int start = 1;
    int end = s.back() - s.front();

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(is_valid(s, k, n, mid)) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> s = {1, 2, 4, 8, 9};
    int k = 3;
    cout << aggressiveCows(s, k) << endl;
    return 0;
}