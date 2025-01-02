#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:

    set<vector<int>> s;

    void getallcomb(vector<int>& arr, int i, vector<vector<int>> &ans, vector<int> &comb, int t) {

        if(i == arr.size() || t < 0) {
            return;
        }

        if(t == 0) {
            if(s.find(comb) == s.end()) {
                ans.push_back(comb);
                s.insert(comb);
            }
            return;
        }

        comb.push_back(arr[i]);
        getallcomb(arr, i+1, ans, comb, t-arr[i]);
        getallcomb(arr, i, ans, comb, t-arr[i]);
        comb.pop_back();
        getallcomb(arr, i+1, ans, comb, t);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int t) {
        vector<vector<int>> ans;
        vector<int> comb;

        getallcomb(arr, 0, ans, comb, t);

        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {2, 3, 6, 7};
    int t = 7;
    vector<vector<int>> result = obj.combinationSum(arr, t);

    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}