class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0 || s.size()==1) return s.size();
        int i=0,j=0;
        unordered_map <char,int> mp;
        int maxi=1;
        while(j<s.size()){
            mp[s[j]]++;
            if(mp[s[j]]==1){ // no repeat
                maxi=max(maxi,j-i+1);
            }
            else if(mp[s[j]]>1){ // element is already there !!
                
                while(mp[s[j]]!=1){
                    if(mp[s[i]]>1){
                        mp[s[i]]--;
                    }
                    else{
                        mp.erase(s[i]);
                    }
                    i++;
                }
    
            }
          //  maxi=max(maxi,j-i+1);
             j++;
        }
        return maxi;
    }
};