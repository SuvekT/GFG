class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(auto it:s)
            mp[it]++;
        int ans=0;
        for(auto it:mp){
            if(it.second%2==0) // means present in even freq
            {
                ans+=it.second;
            }
            else if(it.second>1){
                ans+=(it.second-1);
            }
        }
        if(ans==s.length())
            return ans;
        
            return (ans+1);
    }
};