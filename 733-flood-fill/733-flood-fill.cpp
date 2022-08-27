class Solution {
public:
    bool isvalid(int i,int j,int n,int m, int old_color,vector<vector<int>>& image){
        if(i>=0 && i<n && j>=0 && j<m && image[i][j]==old_color) return true;
        
        return false;
    }
    
    void floodfillrec(int i,int j,int n,int m, int old_color, int color,vector<vector<int>>& image){
        
        image[i][j]=color;
        
        if(isvalid(i+1,j,n,m,old_color,image)){
            floodfillrec(i+1,j,n,m,old_color,color,image);
        }
         if(isvalid(i,j+1,n,m,old_color,image)){
            floodfillrec(i,j+1,n,m,old_color,color,image);
        }
         if(isvalid(i-1,j,n,m,old_color,image)){
            floodfillrec(i-1,j,n,m,old_color,color,image);
        }
         if(isvalid(i,j-1,n,m,old_color,image)){
            floodfillrec(i,j-1,n,m,old_color,color,image);
        }
        
    }
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        
        int old_color=image[sr][sc];
        
        if(old_color==color) return image;
        floodfillrec(sr,sc,n,m,old_color,color,image);
        
        return image;
        
    }
};