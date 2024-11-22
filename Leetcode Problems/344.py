from typing import List

class Solution:
    def reverseString(self, s: List[str]) -> None:
        n = len(s)
        i = 0
        j = n - 1

        while i < j:
            s[i], s[j] = s[j], s[i]  
            i += 1
            j -= 1

if __name__ == '__main__':
    s = Solution()
    lst = ["h", "e", "l", "l", "o"]
    s.reverseString(lst)
    print(lst) 