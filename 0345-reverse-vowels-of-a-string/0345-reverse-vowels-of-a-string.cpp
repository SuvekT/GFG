class Solution {
public:
    int isVowel(char ch)
{
    // Make the list of vowels
    string str = "aeiouAEIOU";
    return (str.find(ch) != string::npos);
}
    string reverseVowels(string s) {
          stack<char> st;
        for(auto it:s){
            if(isVowel(it)) st.push(it);
        }
        
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])) {
                s[i]=st.top();
                st.pop();
            }
        }
        return s;
    }
};