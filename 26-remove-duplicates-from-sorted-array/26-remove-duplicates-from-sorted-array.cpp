class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /* for(auto it:nums){
            if(it==(it++)){
                nums.erase(it++);
}
        }
        return nums.size(); */
        set<int> s;
        for(auto it:nums){
            s.insert(it);
        }
        int i=0;
        for(auto it:s){
            nums[i]=it;
            i++;
        }
        return s.size();
    }
};