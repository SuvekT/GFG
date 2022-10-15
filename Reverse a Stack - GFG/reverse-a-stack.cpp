//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void insert(stack<int> &st,int val){
    if(st.size()==0) {st.push(val);
    return;}
    else{
        int temp=st.top();
        st.pop();
        insert(st,val);
        st.push(temp);
    }
    return;
}
   void fun(stack<int> &st){
       if(st.size()==0) return;
       int temp=st.top();
       st.pop();
       fun(st);
       insert(st,temp);
   }
    stack<int> Reverse(stack<int> St){
       /* stack<int> ans;
        while(!St.empty()){
            ans.push(St.top());
            St.pop();
        }
        return ans; */
        fun(St);
        return St;
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        stack<int> ans=ob.Reverse(St);
        vector<int>res;
        while(ans.size())
        {
            res.push_back(ans.top());
            ans.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends