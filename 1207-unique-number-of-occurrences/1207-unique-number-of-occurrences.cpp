class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> st;
        map<int,int> mp;
        for(auto it:arr) mp[it]++;
        for(auto it:mp) st.insert(it.second);
        return mp.size()==st.size();
    }
};