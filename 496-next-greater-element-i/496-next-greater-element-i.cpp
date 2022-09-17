class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      
        
       map<int,int> mp;
      
        stack<int> st;
        st.push(-1);
       
        for(int i=nums2.size()-1;i>=0;i--){

            
            while(nums2[i]>st.top() && st.top()!=-1){
                st.pop();
            }
            mp[nums2[i]]=st.top();
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(auto it:nums1){
            ans.push_back(mp[it]);
        }
        return ans; 

    }
};