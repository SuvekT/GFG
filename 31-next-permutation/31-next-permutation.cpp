class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    int n=nums.size();
        int ind1=-1;
        int ind2;
        for(int i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]) // breakpoint
            {
                ind1=i-1;
                break;
            }
        }
        if(ind1<0){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int j=n-1;j>ind1;j--){
            if(nums[ind1]<nums[j]){
                ind2=j;
                break;
            }
        }
        swap(nums[ind1],nums[ind2]);
        reverse(nums.begin()+(ind1+1),nums.end());
    }
};
