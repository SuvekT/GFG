class Solution {
public:
    string toLowerCase(string s) {
        // A:65-90 a:97-122
        for(int i=0;i<s.size();i++){
               if(s[i]>='A' && s[i]<='Z'){
    
          s[i]=s[i]+32;
           
           
       }
        }
        return s;
    }
};