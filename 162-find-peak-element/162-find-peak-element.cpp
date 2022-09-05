class Solution {
public:
    int findPeakElement(vector<int>& nums) {
          int ans=0;
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            if(maxi<nums[i]){
                maxi=nums[i];
                ans=i;
            }
        }
        return ans;
    }
};