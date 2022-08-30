class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        /*
        int window_size= p.size();
        vector<int> ans;
        map<char,int> mp;
        for(auto it:p)
            mp[it]++;
       if(mp.size()==1)
        {
            for(int i=0;i<=(s.size()-p.size()+1);i++)
                ans.push_back(i);
        }  
    
        for(int i=0;i<s.size();i++){
           // int index=i;
           // bool flag=true;
            map<char,int> mp1;
            for(int j=i;j<(i+window_size);j++){
              
                    mp1[s[j]]++;
                
            }
            if(mp1==mp) 
            ans.push_back(i);
            
        }
        
        return ans;     */
            int s_len = s.length();
        int p_len = p.length();
        
        if(s.size() < p.size()) return {};
        
        vector<int> freq_p(26,0);
        vector<int> window(26,0);
        
        //first window
        for(int i=0;i<p_len;i++){
            freq_p[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        
        vector<int> ans;
        if(freq_p == window) ans.push_back(0);
        
        for(int i=p_len;i<s_len;i++){
            window[s[i-p_len] - 'a']--;
            window[s[i] - 'a']++;
            
            if(freq_p == window) ans.push_back(i-p_len+1);
        }
        return ans;
            
    }
};