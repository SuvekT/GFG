class Solution {
public:
    string getHint(string secret, string guess) {
        string ans="";
        int bulls=0;
        int cows=0;
        map<char,int> mp;
        for(auto it: secret)
            mp[it]++;
        
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i])
            {bulls++;
             if(mp[secret[i]]==1) mp.erase(secret[i]);
            else mp[secret[i]]--;
             guess[i]='*';
            }
        }
        
        for(int i=0;i<guess.size();i++){
            if(mp.find(guess[i])!=mp.end()){
                cows++;
                if(mp[guess[i]]==1) mp.erase(guess[i]);
            else mp[guess[i]]--; 
            }
        }
        ans+=to_string(bulls);
        ans+='A';
        ans+=to_string(cows);
        ans+='B';
        return ans;
    }
};