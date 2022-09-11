class Solution {
public:
    void fun(vector<vector<int>> &ans,vector<int> temp,vector<int> &nums,int i){
        // edge condition
        if(nums.size()==i){ ans.push_back(temp);
                           return;}

        int ele=nums[i];
       
                // take element
        temp.push_back(ele);
        fun(ans,temp,nums,i+1);
         // no take
        temp.pop_back();
         fun(ans,temp,nums,i+1);
       // return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        if(nums.size()==0) return ans;
        int index=0;
        fun(ans,temp,nums,index);
        return ans;
    }
};