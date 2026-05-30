class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int n=s1.size();
        string y;
        if(s2.size()<s1.size()){
            return false;
        }
        for(int i=0;i<=s2.size()-n;i++){
            y=s2.substr(i,n);
            sort(y.begin(),y.end());
            if(s1==y) return true;
            else{
                continue;
            }
        }
     return false;
        
    }
};
