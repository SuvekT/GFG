class Solution {
public:
    int thirdMax(vector<int>& nums) {
         vector<int> ans;
        map<int,int>u;
        
        for(auto x : nums)
        {
            u[x]++;
        }
        
        for(auto x : u)
        {
            ans.push_back(x.first);
        }
        
        int n = ans.size();
        
       return (n<3)? ans[n-1] : ans[n-3];
    }
};