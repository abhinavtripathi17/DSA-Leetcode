# Last updated: 8/4/2026, 7:17:49 PM
class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        
        xorall = 0
        for num in nums:
            xorall^=num

        setbit = xorall & -xorall

        num1 = 0
        num2 = 0

        for num in nums:
            if num & setbit:
                 num1^=num
            else:
                num2^=num
        return [num1,num2]
            
