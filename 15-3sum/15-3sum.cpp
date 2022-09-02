class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()); // sorting array for two pointer approach
        vector<vector<int>> ans;   
        
        // base case conditions
        if(nums.size()<3) return ans;
        if(nums[0]>0) return ans;
        
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int sum= 0;
            int start=i+1;
            int end=nums.size()-1;
            while(start<end){
                sum=nums[i]+nums[start]+nums[end];
                if(sum==0){ // triplet found
                    ans.push_back({nums[i],nums[start],nums[end]});
                    // for avoiding duplicate elements
                    int low=nums[start];
                    int high=nums[end];
                    while(start<end && low==nums[start]){
                        start++;
                    }
                    while(start<end && high==nums[end]){
                        end--;
                    }
                }
                else if(sum<0){
                    start++;
                }
                else if(sum>0){
                    end--;
                }
            }
        }
        return ans;
    }
};