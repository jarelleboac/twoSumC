class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        a = []
        
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                sum= nums[i]+nums[j]
                if(sum==target):
                    a.append(i)
                    a.append(j)
        
        return a
