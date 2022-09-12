class Solution {
public:
    void fun(vector<int>& nums,int i,int j, vector<vector<int>> &ans, map<vector<int>,int> &mp){
        if(i==j){
            if(mp.find(nums)==mp.end()){
            ans.push_back(nums);
                mp[nums]++;
            }
            return;
        }
        
            for(int x=i;x<=j;x++){
                swap(nums[i],nums[x]);
                fun(nums,i+1,j,ans,mp);
                swap(nums[i],nums[x]);
            }
        
        return;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
      vector<vector<int>> ans;
        map<vector<int>,int> mp;
        if(nums.size()==0) return ans;
        if(nums.size()==1){
            ans.push_back(nums);
            return ans;
        }
        fun(nums,0,nums.size()-1,ans,mp);
        return ans;
    }
};