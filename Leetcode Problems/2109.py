class Solution:
    def addSpaces(self, s: str, spaces: list[int]) -> str:
        s = list(s)
        
        for i, pos in enumerate(spaces):
            s.insert(pos + i, ' ')
        
        return ''.join(s)

if __name__ == '__main__':
    s = "hello"
    spaces = [2, 3]
    print(Solution().addSpaces(s, spaces))