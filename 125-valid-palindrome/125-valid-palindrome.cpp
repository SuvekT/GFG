class Solution {
public:
    bool isPalindrome(string s) {
        string p="";
        for(int i=0;i<s.size();i++){
         if(isalpha(s[i])) p+=tolower(s[i]); 
          else if(isdigit(s[i])) p+=s[i];
        }
        string k=p;
        reverse(p.begin(),p.end());
        return k==p;
    }
};