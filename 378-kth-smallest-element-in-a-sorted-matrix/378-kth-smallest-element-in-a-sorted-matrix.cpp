class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
     /*   int i=matrix[0].size();
        int j=0; // row
        int col=matrix[0].size()-1;
        while(j<matrix.size()){
            if(i<k){
                i+=matrix[0].size();
                j++;
            }
            else if(i>k){
                break;
            }
            else if(i==k){
                return matrix[j][col];
            }
        }
        while(i!=k){
            col--;
            i--;
        }
        return matrix[j][col]; */
             int n = matrix.size(), m = matrix[0].size();
        int a[n*m], z=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                a[z] = matrix[i][j];
                z++;
            }
        }
        sort(a, a+(n*m));
        return a[k-1];
    }
};

/*
k=8
i=8
j=2
col=1
*/