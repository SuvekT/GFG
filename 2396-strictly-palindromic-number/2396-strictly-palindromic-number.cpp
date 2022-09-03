class Solution {
public:
   bool ispalindrome (string s){
       string m= s;
       reverse(m.begin(),m.end());
       return m==s;
   }
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<(n-1);i++){
            int num=n;
            string s="";
            while(num>0){
               
                int baki=num%i;
                 num=num/i;
                s+=to_string(baki);
            }
            if(!ispalindrome(s)) return false;
        }
        return true;
    }
};