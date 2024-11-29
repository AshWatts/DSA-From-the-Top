#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void store_subsets(vector<int>& v, vector<int>& ans, int i, vector<vector<int>>& all_subsets) {
        if (i == v.size()) {
            all_subsets.push_back(ans);
            return;
        }

        ans.push_back(v[i]);
        store_subsets(v, ans, i + 1, all_subsets);

        ans.pop_back();
        store_subsets(v, ans, i + 1, all_subsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> all_subsets;
        vector<int> ans;

        store_subsets(nums, ans, 0, all_subsets);

        return all_subsets;
    }
};


int main() {
    Solution s;
    vector<int> v = {1, 2, 3};
    vector<vector<int>> ans = s.subsets(v);
    for (vector<int> subset : ans) {
        for (int x : subset) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}