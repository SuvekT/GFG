class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftsum=0,rightsum=0;
        for(auto it:nums) rightsum+=it;
        for(int i=0;i<nums.size();i++){
            if(leftsum==(rightsum-nums[i])) return i;
            leftsum+=nums[i];
            rightsum-=nums[i];
        }
        return -1;
    }
};