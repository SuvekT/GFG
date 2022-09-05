class Solution {
public:
    int findMin(vector<int>& nums) {
       
       int low=0;
        int high=nums.size()-1;
        
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[high]){ // mini ele will be in right part
                low=mid+1;
            }
            else if(nums[mid]<nums[high]){ // mini ele will be in left part
                high=mid;
            }
        }
        return nums[high];
    }
};