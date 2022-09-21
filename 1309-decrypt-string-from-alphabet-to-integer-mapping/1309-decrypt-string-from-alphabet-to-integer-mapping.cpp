class Solution {
public:
    string freqAlphabets(string s) {
         string ans = "";

    for(int i=0; i<s.size(); i++){
        if(s[i] == '#'){
            int val = (ans[ans.size()-1] - 'a' + 1) + (ans[ans.size()-2] - 'a' + 1)*10;
            ans.pop_back();
            ans.pop_back();
            ans += val+'a'-1;
        }else{
            ans += s[i]-'1'+'a';
        }
    }

    return ans;
    }
};