class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int r=0;r<row.size();r++){
        for(int i=0;i<matrix[0].size();i++){
            matrix[row[r]][i]=0;
        }
        }
        
                for(int c=0;c<col.size();c++){
        for(int i=0;i<matrix.size();i++){
            matrix[i][col[c]]=0;
        }
        }
        
    }
};