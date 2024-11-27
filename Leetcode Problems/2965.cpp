#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> s;
        vector<int> ans;
        int n = grid.size();
        int n_squared = n * n;
        
        // Calculate the expected sum of numbers 1 to n^2
        int tsum = (n_squared * (n_squared + 1)) / 2;
        int sum = 0;
        int repeated = -1;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                int val = grid[i][j];
                
                // If the value is already in the set, it's the repeated number
                if(s.find(val) != s.end()) {
                    repeated = val;
                } else {
                    s.insert(val);
                    sum += val;
                }
            }
        }

        // The missing number is tsum - sum + repeated (since repeated was subtracted once)
        int missing = tsum - sum;

        ans.push_back(repeated);
        ans.push_back(missing);

        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{1, 2, 3, 4},
                                 {2, 3, 1, 4},
                                 {3, 2, 4, 1},
                                 {4, 2, 3, 1}};
    vector<int> result = s.findMissingAndRepeatedValues(grid);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
