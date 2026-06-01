class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        A={}
        for i, num in enumerate(nums):
            A[num]=i;
        for i,num in enumerate(nums):
            if target-num in A and A[target-num]!=i:
                return [i,A[target-num]]
        return []


            


        
        