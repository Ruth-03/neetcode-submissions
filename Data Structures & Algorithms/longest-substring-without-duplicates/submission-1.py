class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        right=0
        left=0
        seen=set()
        maxcount=0
        while right<=len(s)-1:
            if s[right] not in seen:
                seen.add(s[right])
                count=len(seen)
                right+=1
            else:
                seen.remove(s[left])
                left+=1

            maxcount=max(maxcount,count)
        return maxcount



        