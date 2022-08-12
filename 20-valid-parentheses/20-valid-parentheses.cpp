class Solution {
public:
    bool isValid(string s) {
        if(s.length()==1) return false;
       // if(s[0]=='}' || (s[0]==']' || s[0]==')')) return false;
        stack<char> st;
    
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || (s[i]=='{' || s[i]=='[' ))
                st.push(s[i]);
            else{
                if(st.empty()) return false;
                char temp=st.top();
                if((s[i]==')' && temp!='(') || ((s[i]==']' && temp!='[') || (s[i]=='}' && temp!='{') )  )  return false;
                st.pop();
      
            }
        }
        return st.empty();
    }
};