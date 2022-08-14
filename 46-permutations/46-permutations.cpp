class Solution {
    
    vector<vector<int>> result;
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums, 0, (int)nums.size() - 1);
        
        return result;
    }
    
    void helper(vector<int> num_arr, int l, int r) {
        if (l == r){
            result.push_back(num_arr);
        } 
        else {  
            for (int i = l; i <= r; i++) {
                swap(num_arr[l], num_arr[i]);

                helper(num_arr, l + 1, r); 

                swap(num_arr[l], num_arr[i]);  
            }  
        }
    }  
 /* void fun(int i,vector<int> num){
        if(i>=num.size()){
            ans.push_back(num);
            return;
        }
        for(int j=i;j<num.size();j++){
            swap(num[i],num[j]);
            fun(i+1,num);
            swap(num[i],num[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
       // vector<vector<int>> ans;
        if(nums.size()==0) return ans;
        if(nums.size()==1) {
            ans[0].push_back(nums[0]);
            return ans;
        }
        fun(0,nums);
        return ans;
        
    }  */
};

/*

*/