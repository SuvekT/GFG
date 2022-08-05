class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int cap =s.size();
        if(cap%2==0){
            for(int i=0;i<cap/2;i++){
            temp=s[i];
            s[i]=s[cap-i-1];
            s[cap-i-1]=temp;
        }
        }
        else{
        for(int i=0;i<=cap/2;i++){
            temp=s[i];
            s[i]=s[cap-i-1];
            s[cap-i-1]=temp;
        }
        }
    }
};