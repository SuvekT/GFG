class AuthenticationManager {
public:
    int duration=0;
    map<string,int> mp;
    AuthenticationManager(int timeToLive) {
        duration=timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        mp[tokenId]=(currentTime);
    }
    
    void renew(string tokenId, int currentTime) {
        // when respective tokenId is not there
        if(mp.find(tokenId)!=mp.end() && (mp[tokenId]+duration)>currentTime){
            mp[tokenId]=currentTime;        }
    }
    
    int countUnexpiredTokens(int currentTime) {
        int ans=0;
        for(auto it:mp){
            if(currentTime>it.second && currentTime<(it.second+duration)) ans++;
        }
        return ans;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */