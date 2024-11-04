#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mp = 0;
        int bb = prices[0];

        for(int i=1;i<n;i++){
            if(prices[i] > bb){
                mp = max(mp, prices[i] - bb); 
            }
            bb = min(bb, prices[i]);
        }
        return mp;
    }
};

int main() {
    Solution sol;
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << sol.maxProfit(prices1) << endl;
    cout << sol.maxProfit(prices2) << endl; 
    return 0;
}