class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int index=-1;
        int mini=INT_MAX;
        for(int i=0;i<points.size();i++){
             if(x== points[i][0] || y== points[i][1]){
              int dist = abs(x-points[i][0])+abs(y-points[i][1]);
              if( dist<mini){
                  index=i;
                  mini=dist;
              }
          }
        }
        return index;
    }
};