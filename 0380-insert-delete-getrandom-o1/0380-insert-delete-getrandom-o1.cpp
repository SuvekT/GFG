class RandomizedSet {
public:
    unordered_set<int> st;
   // auto it=st.begin();
    RandomizedSet() {
        st.clear();
    }
    
    bool insert(int val) {
        bool ans=st.count(val);
        st.insert(val);
        return !ans;
    }
    
    bool remove(int val) {
        bool ans=st.count(val);
        st.erase(val);
        return ans;
    }
    
    int getRandom() {
        return *next(st.begin(),rand()%st.size());
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */