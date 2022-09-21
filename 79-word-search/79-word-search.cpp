class Solution {
public:
   // bool ans=false;
    bool fun(vector<vector<char>>& board,string word,int i,int j,int index){
        if(index==word.size()){
           // if(board[i][j]==word[word.size()-1])
           return true;
           // else return false;
        }
        if(i<0 || i==board.size() || j<0 || j==board[0].size() || board[i][j]!=word[index]) return false; 
        
      //  if(word[index]!=board[i][j]) return;
            char temp=board[i][j];
            board[i][j]='#';
        bool left=fun(board,word,i,j-1,index+1);// left
        bool right=fun(board,word,i,j+1,index+1);// right
        bool up=fun(board,word,i-1,j,index+1);//up
        bool down=fun(board,word,i+1,j,index+1);//down
            board[i][j]=temp;
        return(up || left || down || right);
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(word[0]==board[i][j])
                {
                  if(fun(board,word,i,j,0))
                      return true;
                }
            }
        }
        return false;
    }
};