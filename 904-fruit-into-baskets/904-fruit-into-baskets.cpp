class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        int j=0,maxi=0;
          unordered_map<int,int> mp;
        while(j<fruits.size()){
            mp[fruits[j]]++;
            if(mp.size()<=2){ //j++;
                             maxi=max(maxi,j-i+1);
                            }
            else if(mp.size()>2){
                while(mp.size()!=2){
                    if(mp[fruits[i]]>1) mp[fruits[i]]--;
                    else mp.erase(fruits[i]);
                    i++;
                }
            }
            j++;
        }
        return maxi;
    }
};