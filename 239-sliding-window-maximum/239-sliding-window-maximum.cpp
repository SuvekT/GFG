class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        list<int> ll;
        int i=0,j=0;
        while(j<nums.size()){
            
            while(ll.size()>0 && nums[j]>ll.back())
                ll.pop_back();
            
            ll.push_back(nums[j]); // put coming element in list
            
            if(j-i+1<k) j++; // window size is not hitt
            else{
                ans.push_back(ll.front());
                if(nums[i]==ll.front()) // going element is maximum
                    ll.pop_front();
                i++,j++;
            }
        }
        return ans;
    }
};