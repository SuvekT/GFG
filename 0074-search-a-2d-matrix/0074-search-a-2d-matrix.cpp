class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       /* int i=0;
        int j=matrix[0].size()-1;
        while(i<matrix.size()){
            if(target>matrix[i][j]){
                j=matrix[0].size()-1;
                i++;
            }
            else if(target<matrix[i][j]){
                j--;
            }
            else{
               return true; 
            }
        }
        return false;   */
          for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(target==matrix[i][j])
                    return true;
            }
        }
        return false;
    }
};