class Solution {
public:
    string reverseWords(string s) {
        if(s.size()==0) return 0;
        stack<string> st;
        string ans="";
        
        for(int i=0;i<s.size();i++){
          string t="";
            if(s[i]==' ') continue;
            while(i<s.size() && s[i]!=' '){
                t+=s[i++];   
            }
            st.push(t);
        }
        while(!st.empty()){
            ans+=st.top();
           if(st.size()>1) ans+=" ";
            st.pop();
        }
        return ans;
    }
};