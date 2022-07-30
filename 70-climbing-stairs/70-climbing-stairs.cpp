class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
            return n;
        int prev1=2;
        int prev2=1;
        for(int i=3;i<=n;i++){
            int curr=prev1+prev2;
            prev2=prev1;
             prev1=curr;
}
        return prev1;
    }
};


/*
    if (n <= 2) return n;
        int prev = 2, prev2 = 1, res;
        for (int i = 3; i <= n; i++) {
            res = prev + prev2;
            prev2 = prev;
            prev = res;
        }
        return res;


*/