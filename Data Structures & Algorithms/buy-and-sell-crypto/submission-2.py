class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minimum=prices[0]
        left, right =0, len(prices)-1
        maxprofit=0
        while left<=right:
            minimum=min(minimum,prices[left])
            diff=prices[left]-minimum
            maxprofit=max(maxprofit,diff)
            left+=1
        return maxprofit
        