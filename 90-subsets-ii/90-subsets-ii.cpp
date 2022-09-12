class Solution {
public:
        void fun(vector<vector<int>> &ans,vector<int> temp,vector<int> &nums,int i,map<vector<int>,int> &mp){
        // edge condition
        if(nums.size()==i){
            if(mp.find(temp)==mp.end())
            {ans.push_back(temp);
                           mp[temp]++;}
                           return;}

        int ele=nums[i];
       
                // take element
        temp.push_back(ele);
        fun(ans,temp,nums,i+1,mp);
         // no take
        temp.pop_back();
         fun(ans,temp,nums,i+1,mp);
       // return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          vector<vector<int>> ans;
        map<vector<int>,int> mp;
        vector<int> temp;
        if(nums.size()==0) return ans;
        int index=0;
        sort(nums.begin(),nums.end());
        fun(ans,temp,nums,index,mp);
        return ans;
    }
};