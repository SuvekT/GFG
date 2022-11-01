class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int dir=0;
        int nums=1;
        int top=0,bottom=n-1,left=0,right=n-1;
        while(left<=right && top<=bottom){
            if(dir==0){
                for(int i=left;i<=right;i++) ans[top][i]=nums++;
            
            top++;}
            else if(dir==1){
                for(int i=top;i<=bottom;i++) ans[i][right]=nums++;
            
            right--;}
            else if(dir==2){
                for(int i=right;i>=left;i--) ans[bottom][i]=nums++;
            
            bottom--;}
            else if(dir==3){
                for(int i=bottom;i>=top;i--) ans[i][left]=nums++;
            
            left++;}
            dir=(dir+1)%4;
        }
        return ans;
    }
};