class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
     if (s1==s2) return true;
       if(s1.size()!=s2.size()) return false; 
        int pos1,pos2,diff=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                diff++;
                if(diff==1)
                pos1=i;  // 1st
                else if(diff==2)
                    pos2=i; //2nd
                else if(diff>2)
                    return false;
            }
        }
        if(diff==1) return false;
        swap(s2[pos1],s2[pos2]);
        return s1==s2;
    }
};