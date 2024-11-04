class Solution:
    def myPow(self, x: float, n: int) -> float:
        if n == 0:
            return 1
        if n == 1 or x == 0 or x == 1:
            return x
        
        ans = 1
        bf = n

        if n < 0:
            x = 1 / x
            bf = -bf

        while bf > 0:
            if bf % 2 == 1:
                ans *= x
            x *= x
            bf //= 2

        return ans

solution = Solution()
print(solution.myPow(2.0, 10)) 
print(solution.myPow(2.1, 3))   