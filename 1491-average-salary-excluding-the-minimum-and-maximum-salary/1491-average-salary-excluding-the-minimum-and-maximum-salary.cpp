class Solution {
public:
    double average(vector<int>& salary) {
        double avg=0;
        double ans=0;
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++){
            avg+=salary[i];
        }
        ans=avg/(salary.size()-2);
        return ans;
    }
};