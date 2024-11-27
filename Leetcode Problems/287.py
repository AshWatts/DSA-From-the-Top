from typing import List

class Solution:
    def findDuplicate(self, n: List[int]) -> int:
        slow = n[0]
        fast = n[0]

        while True:
            slow = n[slow]
            fast = n[n[fast]]
            if slow == fast:
                break

        slow = n[0]
        while slow != fast:
            slow = n[slow]
            fast = n[fast]
        
        return slow
    
if __name__ == '__main__':
    s = Solution()
    print(s.findDuplicate([1,3,4,2,2])) # 2
