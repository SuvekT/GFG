class Solution {
public:

    int singleNonDuplicate(vector<int>& nums) {
     /*   int ans=0;
        for(auto it:nums) ans=ans ^ it;
         return ans;  */
        int n=nums.size();
        int l=0,r=n-1,mid;
        while(l<r){
            mid=(l+r)/2;
            if(mid%2==0){
            if(nums[mid]!=nums[mid+1]) // problem lies in left half
                r=mid;
                else
                    l=mid+1;
            }
            else{
                if(nums[mid]==nums[mid-1]) // lies in right half
                    l=mid+1;
                else
                    r=mid;  
            }
        }
        return nums[l];
    }
   
};
