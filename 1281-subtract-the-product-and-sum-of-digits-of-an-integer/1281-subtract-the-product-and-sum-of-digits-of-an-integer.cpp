class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0;
        while(n>0){
            int t=n%10;
            sum+=t;
            prod*=t;
            n=n/10;
        }
        return prod-sum;
    }
};