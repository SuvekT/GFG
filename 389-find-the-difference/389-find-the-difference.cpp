class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> alpha(26,0);
        for(int i=0;i<s.size();i++){
            alpha[s[i]-97]++;
        }
        for(int i=0;i<t.size();i++){
            if(alpha[t[i]-97]==0) return t[i];
           
                alpha[t[i]-97]--;
            
        }
        return 0;
    }
};