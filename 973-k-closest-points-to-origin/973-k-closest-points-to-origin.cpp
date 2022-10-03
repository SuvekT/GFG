class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
   /*     int n=points.size();
        map<int,vector<pair<int,int>>> mp;
        for(int i=0;i<n;i++){
            int f=points[i][0];
            int s=points[i][1];
            int distance=sqrt((f*f)+(s*s));
            mp[distance].push_back({f,s});
        }
        vector<vector<int>> ans;
        for(auto it:mp){
            for(auto it1:it.second){
                if(k==0) break;
                vector<int> temp;
                temp.push_back(it1.first);
                temp.push_back(it1.second);
            ans.push_back(temp);
            k--;
            }
        }
        return ans; */
  map<int,vector<int>>mp;
        for(int i=0;i<points.size();i++)
        {
            int t=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            mp[t].push_back(i);
        }
        vector<vector<int>>ans;
        for(auto it:mp)
        {
            if(k>0){
            for(auto a: it.second)
            {
                ans.push_back(points[a]);
                --k;
                if(k==0)break;
            }
            }
        }
        return ans;      
    }
};

      