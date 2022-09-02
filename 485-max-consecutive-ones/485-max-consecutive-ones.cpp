class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int sum=0;
        for(auto it:nums){
            if(it==0) sum=0;
            else{
                sum+=it;
            }
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};