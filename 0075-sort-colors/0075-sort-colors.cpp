class Solution {
public:
    void sortColors(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
        int r=0,w=0,b=0; 
        for(auto it:nums){
            if(it==0) r++;
            else if(it==1) w++;
            else b++;
        }
        int i=0;
        while(r>0 && i<nums.size()){
            nums[i++]=0;
            r--;
        }
        while(w>0 && i<nums.size()){
            nums[i++]=1;
            w--;
        }
        while(b>0 && i<nums.size()){
            nums[i++]=2;
            b--;
        }
    }
};