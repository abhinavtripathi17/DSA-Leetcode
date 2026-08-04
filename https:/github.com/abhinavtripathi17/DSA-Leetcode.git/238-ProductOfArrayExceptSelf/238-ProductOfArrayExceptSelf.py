# Last updated: 8/4/2026, 7:18:07 PM
from typing import List

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        
        # Initialize result array
        result = [1] * n
        
        # Calculate left products
        left_product = 1
        for i in range(n):
            result[i] *= left_product
            left_product *= nums[i]
        
        # Calculate right products and combine with left products
        right_product = 1
        for i in range(n - 1, -1, -1):
            result[i] *= right_product
            right_product *= nums[i]
        
        return result

# Test cases
solution = Solution()
nums1 = [1, 2, 3, 4]
nums2 = [-1, 1, 0, -3, 3]

print(solution.productExceptSelf(nums1))  # Output: [24, 12, 8, 6]
print(solution.productExceptSelf(nums2))  # Output: [0, 0, 9, 0, 0]
