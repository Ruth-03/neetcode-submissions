class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        def is_anagram(str1,str2):
            if len(str1)!=len(str2):
                return False
            return sorted(str1)==sorted(str2)

        seen=set()
        output=[]
        for i in range(len(strs)):
            if i in seen:
                continue
            v=[]
            v.append(strs[i])
            seen.add(i)
            for j in range(i+1, len(strs)):
                if is_anagram(strs[i],strs[j]):
                        v.append(strs[j])
                        seen.add(j)
            output.append(v)
        return output