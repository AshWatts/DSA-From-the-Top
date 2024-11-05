from typing import List

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        n = len(nums)
        start = 0
        end = n - 1

        while(start <= end):
            mid = start + (end - start) // 2

            if(nums[mid] == target):
                return mid
            
            if(nums[start] <= nums[mid]):
                if(nums[start] <= target and target <= nums[mid]):
                    end = mid - 1
                else:
                    start = mid + 1

            else:
                if(nums[mid] <= target and target <= nums[end]):
                    start = mid + 1
                else:
                    end = mid - 1

        return -1
    
    
def main():
    test = Solution()
    print(test.search([4,5,6,7,0,1,2], 0))
    print(test.search([4,5,6,7,0,1,2], 3))
    
if __name__ == "__main__":
    main()