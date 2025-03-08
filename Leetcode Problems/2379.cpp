#include<iostream>
#include<climits>
using namespace std;

class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int left = 0, numWhites = 0, numRecolors = INT_MAX;
    
            for (int right = 0; right < blocks.size(); right++) {
                if (blocks[right] == 'W') {
                    numWhites++;
                }
    
                if (right - left + 1 == k) {
                    numRecolors = min(numRecolors, numWhites);
    
                    if (blocks[left] == 'W') numWhites--;
    
                    left++;
                }
            }
            return numRecolors;
        }
    };

int main() {
    Solution s;
    cout<<s.minimumRecolors("BBWBWBWB", 3)<<endl;
    return 0;
}