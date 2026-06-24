class Solution:
    def maxArea(self, heights: List[int]) -> int:
        left, right =0, len(heights)-1
        maxarea=0
        while left<right:
            width=right-left
            area=min(heights[left],heights[right])*width
            if heights[left]<=heights[right]:
                maxarea=max(area,maxarea)
                left+=1
            else:
                maxarea=max(area,maxarea) 
                right-=1
        return maxarea

            
        