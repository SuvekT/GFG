class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int row=matrix.size(); //  3
        int col=matrix[0].size(); // 3
        
     //vector< vector<int>> a(matrix.size(),vector<int>(matrix[0].size(),0));
        vector<int> v;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                v.push_back(matrix[i][j]);
            }
        }
        int k=0;
        for(int i=col-1;i>=0;i--){
            for(int j=0;j<row;j++){
                matrix[j][i]=v[k];
                k++;
            }
        }
        
    }
};

/*
v : 1 2 3 4 5 6 7 8 9



*/