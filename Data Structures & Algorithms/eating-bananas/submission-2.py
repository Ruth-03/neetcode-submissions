import math
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        def numofhours(piles: List[int],k: int):
            l, r =0, len(piles)-1
            sum=0
            for pile in piles:
                sum=sum+math.ceil(pile/k)
            return sum

        r=max(piles)
        a=1
        ans=r
        while a<=r:
            mid=(a+r)//2
            if numofhours(piles,mid)>h:
                a=mid+1
            if numofhours(piles,mid)<=h:
                ans=mid
                r=mid-1
                
        return ans


        


        