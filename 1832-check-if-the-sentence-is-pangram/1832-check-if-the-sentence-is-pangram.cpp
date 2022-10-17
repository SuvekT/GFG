class Solution {
public:
    bool checkIfPangram(string s) {
        if(s.size()<26) return false;
        
        /*
        map<char,int> mp;
        for(auto it:sentence) mp[it]++;
        return (mp.size()==26) ? true : false ; */
        unordered_set<char> st;
        for(auto it:s) st.insert(it);
        return (st.size()==26) ? true : false ;
    } 
};