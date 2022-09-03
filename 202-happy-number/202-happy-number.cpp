class Solution {
public:
    bool isHappy(int n) {
       unordered_map<int,int> mp;
        
        while(n>1){
        int num=0;
        int m=n;
        while(m>0){
            num+=(m%10)*(m%10);
            m=m/10;
        }
        n=num;
            if(mp[n]>1){
                return false;
            }
            mp[n]++;
        }
        return (n==1);
    }
};
