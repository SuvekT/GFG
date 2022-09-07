class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int minlen=n+1;
        //int currlen=n+1;
        int left=0,right=0;
        int sum=0;
        while(right<n){
            sum+=nums[right++];
            while(sum>=target){
                minlen=min(minlen,right-left);
                sum-=nums[left++];
            }
        }
        if(minlen==n+1) return 0;
        else return minlen;
    }
};