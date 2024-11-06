from typing import List

class Solution:
    def singleNonDuplicate(self, nums: List[int]) -> int:
        n = len(nums)
        if(n==1):
            return nums[0]
        
        start = 0
        end = n-1

        while(start <= end):
            mid = start + (end - start) // 2

            if(mid == 0 and nums[mid] != nums[mid+1]):
                return nums[mid]

            if(mid == n-1 and nums[mid] != nums[mid-1]):
                return nums[mid]

            if(nums[mid - 1] != nums[mid] and nums[mid + 1] != nums[mid]):
                return nums[mid]

            if(mid % 2 == 0):
                if(nums[mid - 1] == nums[mid]):
                    end = mid - 1
                else:
                    start = mid + 1

            else:
                if(nums[mid -1] == nums[mid]):
                    start = mid + 1
                else:
                    end = mid - 1

        return -1
    
def main():
    print("Input: [1,1,2,3,3,4,4,8,8]")
    print("Output:", Solution().singleNonDuplicate([1,1,2,3,3,4,4,8,8]))
    print()
    print("Input: [3,3,7,7,10,11,11]")
    print("Output:", Solution().singleNonDuplicate([3,3,7,7,10,11,11]))
    print()
    
main()