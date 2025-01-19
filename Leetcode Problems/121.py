from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        l = 0                                             # 2 Pointer Approach
        r = 1
        maxP = 0

        while(r < len(prices)):
            if(prices[l] < prices[r]):
                p = prices[r] - prices[l]
                maxP = max(p, maxP)
            else:
                l = r
            r += 1
        
        return maxP

if __name__ == "__main__":
        prices = [7, 1, 5, 3, 6, 4]
        solution = Solution()
        print(solution.maxProfit(prices))