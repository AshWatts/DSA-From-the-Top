#include<iostream>
#include<vector>
#include<algorithm>
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
        
        int index = i+1;
        while(index < v.size() && v[index] == v[index - 1]) {
            index++;
        }
        store_subsets(v, ans, index, all_subsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        vector<vector<int>> all_subsets;

        store_subsets(nums, ans, 0, all_subsets);

        return all_subsets;
    }
};

int main() {
    Solution s;
    vector<int> v = {1, 2, 2};
    vector<vector<int>> ans = s.subsetsWithDup(v);
    for (vector<int> subset : ans) {
        for (int x : subset) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}