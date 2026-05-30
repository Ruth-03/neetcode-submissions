class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int count=1;
        int longest=1;

        vector <int> s;
        for (int i=0;i<nums.size()-1;i++){
        if(nums[i+1]-nums[i]==0) continue;
          if(nums[i+1]-nums[i]==1){
            count++;
          }
         
          else{
         longest=max(longest,count);
          count=1;
          }
          longest =max(longest,count);
        }
        
        return longest;
        
    }
};
