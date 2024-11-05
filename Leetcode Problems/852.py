from typing import List

class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        n = len(arr)
        start = 1
        end = n-2

        while(start <= end):
            mid = start + (end - start) // 2

            if(arr[mid-1] < arr[mid] and arr[mid+1] < arr[mid]):
                return mid

            if(arr[mid] > arr[mid-1]):
                start = mid + 1
            
            else:
                end = mid - 1

        return -1
    
def main():
    print("Peak Index in Mountain Array")
    arr = [0, 1, 0]
    print(Solution().peakIndexInMountainArray(arr))
    arr = [24, 69, 100, 99, 79, 78, 67, 36, 26, 19]
    print(Solution().peakIndexInMountainArray(arr))
    
main()