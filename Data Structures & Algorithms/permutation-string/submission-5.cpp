class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         if(s2.size()<s1.size()){
            return false;
        }
        vector<int>c1(26,0),c2(26,0);
        for( char c:s1){
            c1[c-'a']++;
        }
        int n=s1.size();
        for(int i=0;i<s2.size();i++){
            c2[s2[i]-'a']++;
            if(i>=n){
              c2[s2[i-n]-'a']--;
              
            }
            if(c1==c2) return true;

        }
     return false;
        
    }
};
