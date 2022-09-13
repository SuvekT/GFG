class Solution {
public:
    vector<vector<int>> ans;
    void fun(vector<int> &t,vector<int>& candidates,int i,int k){
        if(i==candidates.size()){
         if(k==0)   ans.push_back(t);
            return;
        }

        //pick index(i) element
        
        if(candidates[i]<=k){
            t.push_back(candidates[i]);
        fun(t,candidates,i,k-candidates[i]);
        t.pop_back();}
        
        //not pick index(i) element
        fun(t,candidates,i+1,k);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        fun(temp,candidates,0,target);
        return ans;
    }
};