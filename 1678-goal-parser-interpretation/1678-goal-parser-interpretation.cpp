class Solution {
public:
    string interpret(string cd) {
        string ans="";
        int i=0;
  while(i<cd.size()){
      if(cd[i]=='G') {ans+='G';
                      i++;}
      else if(cd[i]=='(' && cd[i+1]==')'){
          ans+='o';
                            i=i+2;
      }
      else if(cd[i]=='(' && cd[i+1]=='a'){
          ans+='a';
          ans+='l';
          i+=4;
      }
  }
        return ans;
    }
};