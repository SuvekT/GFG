class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int top=0,bot=matrix.size()-1;
        int left=0,right=matrix[0].size()-1;
        int dir=0; // 0-right 1-down 2-left 3-up
         while(top<=bot && left<=right){
            if(dir==0){
                for(int i=left;i<=right;i++){
                    v.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dir==1){
                for(int i=top;i<=bot;i++){
                    v.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(dir==2){
                for(int i=right;i>=left;i--){
                    v.push_back(matrix[bot][i]);
                }
                bot--;
            }
            else if(dir==3){
                for(int i=bot;i>=top;i--){
                    v.push_back(matrix[i][left]);
                }
                left++;
            }
           dir=(dir+1)%4; 
        }
        return v;
    }
};