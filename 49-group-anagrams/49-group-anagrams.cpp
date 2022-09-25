class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
           
                mp[temp].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it:mp){
            vector<string> t;
            for(auto it1:it.second){
                t.push_back(it1);
            }
            ans.push_back(t);
        }
        return ans;
    }
};
/*
aet - eat tea ate
ant- tan nat
abt- bat  */

