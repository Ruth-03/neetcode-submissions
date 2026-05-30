class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        int n=strs.size();
        int j;
        vector<int>seen(n,0);
        for(int i=0;i<strs.size();i++){
            if(seen[i]) continue;
            vector<string>anagram;
            string key=strs[i];
            sort(key.begin(),key.end());
          for(int j=i;j<n;j++){
            string value=strs[j];
            sort(value.begin(),value.end());
            
            if(seen[j]==0&& key==value){
                seen[j]=1;
                
                anagram.push_back(strs[j]);

            }
          }
          seen[i]=1;
          v.push_back(anagram);
        }
    return v;

        
    }
};
