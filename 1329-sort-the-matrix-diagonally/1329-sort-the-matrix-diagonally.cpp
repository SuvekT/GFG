class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
       int m=mat.size();
        int n=mat[0].size();
for(int k=n-1;k>=0;k--)
{
vector<int> v;
for(int i=0,j=k;i<m&&j<n;i++,j++)
{
v.push_back(mat[i][j]);
}
sort(v.begin(),v.end());
for(int i=0,j=k;i<m&&j<n;i++,j++)
{
mat[i][j]=v[i];
}
}
for(int k=m-1;k>0;k--)
{
vector<int> v;
for(int i=k,j=0;i<m&&j<n;i++,j++)
{
v.push_back(mat[i][j]);
}
sort(v.begin(),v.end());
for(int i=k,j=0;i<m&&j<n;i++,j++)
{
mat[i][j]=v[j];
}
}
return mat;
    }
};


