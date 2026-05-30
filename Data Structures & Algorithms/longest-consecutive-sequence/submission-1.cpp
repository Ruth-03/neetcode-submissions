class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int>numSet;
        int longest=0;
        for (int a: nums){
            numSet.insert(a);
        }
        for (int num: numSet){
            if(!numSet.count(num-1)){
                int length=1;
                while (numSet.count(num+length)){
                    length++;
                }
                longest=max(longest,length);
            }

        } 
        return longest;       
    }
};
