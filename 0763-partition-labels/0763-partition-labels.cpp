class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int> mp;
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=i;
        }
        int prev=-1,maxi=0;
        for(int i=0;i<s.size();i++){
             maxi=max(mp[s[i]],maxi);
            if(i==maxi){
                ans.push_back(maxi-prev);
                prev=maxi;
              //  maxi=0;
            }
        }
        return ans;
    }
};