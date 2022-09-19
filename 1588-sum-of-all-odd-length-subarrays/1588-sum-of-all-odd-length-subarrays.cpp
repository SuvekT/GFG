class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        long long int sum=0;
        for(int i=0;i<n;i++){
            long long int p=0;
            for(int j=i;j<n;j++){
                p+=arr[j];
                if((j-i+1)%2!=0){
                    sum+=p;
                }
            }
        }
        return sum;
    }
};
