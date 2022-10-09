class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int ans=0;
        int prod=1;
        int left=0;
        int right=0;
        while(right<nums.size()){
           // if(nums[right]<k && right!=0) ans++;
             prod*=nums[right++];
           
            while(prod>=k){
                prod/=nums[left++];
            }
            ans+=(right-left);
        }
        return ans;
    }
};

/*  k=100
prod=60
ans=111111
left =1

*/