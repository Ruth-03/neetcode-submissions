class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>m;
        int length=0;
        int left=0;
      for(int i=0;i<s.size();i++){
        
        if(m.find(s[i])!=m.end()){
          while(m.count(s[i])==1){
            m.erase(s[left]);
            left++;
          }
            
        }

            m.insert(s[i]);
            length=max(length,(int)m.size());
            
        

      }
      return length;     
        
    }
};
