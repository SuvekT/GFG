class Solution {
public:
    int maxProduct(vector<int>& nums) {
         if(nums.size()==0)
	    return 0;
	    if(nums.size()==1)
	    return nums[0];
	    int ans=nums[0];
        int ma=ans;
        int mi=ans;
	    for(int i=1;i<nums.size();i++){
	        if(nums[i]<0){
	            swap(ma,mi);
	        }
	       /* if(arr[i]==0){
	            ma=mi=1;
	        } */
	        ma=max(nums[i],ma*nums[i]);
	        mi=min(nums[i],mi*nums[i]);
	        ans=max(ans,ma);
	    }
	    return ans;
    }
};