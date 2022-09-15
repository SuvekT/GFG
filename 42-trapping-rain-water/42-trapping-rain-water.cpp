class Solution {
public:
    int trap(vector<int>& height) {
        int maxleft=height[0],maxright=height[height.size()-1];
        int trapp=0,i=0,j=height.size()-1;
       while(i<j){
           if(maxleft<maxright){
               i++;
               maxleft=max(maxleft,height[i]);
               trapp+=(maxleft-height[i]);
           }
           else{
               j--;
               maxright=max(maxright,height[j]);
               trapp+=(maxright-height[j]);
           }
       }
        return trapp;
    }
};
/*
water trap on each bar = min(maxright,maxleft)-(lenght of bar)

*/