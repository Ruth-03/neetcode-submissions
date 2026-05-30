class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for (int i=0; i<nums.size();i++){
           mp[nums[i]]++;
        }
        vector<pair<int,int>> freq;
        for (auto &it : mp) {
            freq.push_back({it.second, it.first}); 
        }
        sort(freq.rbegin(),freq.rend());
        vector<int>v;
        for(auto &it: freq){
        if(k==0)   return v;
            k--;
            v.push_back(it.second);
        }
        return v;
    }
};
