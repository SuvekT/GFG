class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left_arr(n);
        vector<int> right_arr(n);
        
        left_arr[0]=1;
        right_arr[n-1]=1;
        for(int i=1;i<n;i++){
           left_arr[i] = left_arr[i-1] * nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            right_arr[i]= right_arr[i+1] * nums[i+1];
        }
        for(int i=0;i<n;i++){
            nums[i]=left_arr[i] * right_arr[i];
        }
        return nums;
    }
};