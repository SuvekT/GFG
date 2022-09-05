class Solution {
public:
    void solve(int o,int c,string op, vector<string> &ans){
        if(o==0 && c==0){
            ans.push_back(op);
            return;
        }
        if(o!=0){
            string op1=op;
            op1.push_back('(');
            solve(o-1,c,op1,ans);
        }
        if(c>o){ // we have two choices
            string op2=op;
            op2.push_back(')');
            solve(o,c-1,op2,ans);
            return;
            }
    }
    vector<string> generateParenthesis(int n) {
        int open=n;
        int close=n;
        vector<string> ans;
        string op="";
        solve(open,close,op,ans);
        return ans;
    }
};
/*
whenever string size is odd always put close bracket

*/