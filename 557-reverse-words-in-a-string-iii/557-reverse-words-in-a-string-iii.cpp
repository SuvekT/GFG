class Solution {
public:
    string reverse(string str){
        int i=0;
        int j=str.length()-1;
        while(i<j){
            swap(str[i],str[j]);
            i++;
            j--;
        }
        return str;
    }
    string reverseWords(string s) {
        
        string ans="";
        string temp="";
        for(int i=0;i<s.length();i++){
            
            if(s[i]==' '){
              ans+=reverse(temp);
                ans+=' ';
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        ans+=reverse(temp);
        return ans;
    }
};

/*

temp=Let's  s'teL

*/