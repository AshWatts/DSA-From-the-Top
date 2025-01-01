#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    int maxScore(string inputStr) {
        int onesCount = 0;
        int zerosCount = 0;
        int bestScore = INT_MIN;

        for (int i = 0; i < inputStr.size() - 1; i++) {
            if (inputStr[i] == '1') {
                onesCount++;
            } else {
                zerosCount++;
            }
            
            bestScore = max(bestScore, zerosCount - onesCount);
        }
        
        if (inputStr[inputStr.size() - 1] == '1') {
            onesCount++;
        }
        
        return bestScore + onesCount;
    }
};

int main() {
    Solution obj;
    string inputStr = "011101";
    cout << obj.maxScore(inputStr);

    return 0;
}