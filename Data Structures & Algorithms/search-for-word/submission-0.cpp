class Solution {
public:
    bool res=false;
    void rec(vector<vector<char>>& board,vector<vector<bool>>&is, string word,int i,int j,int curr=0,int index=0){
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size())
            return ;
        if(is[i][j] || board[i][j] != word[index])
            return ;
        if(board[i][j]==word[index]){
            curr++;
            index++;
        }
        if(curr==word.size()){
            res=true;
            return;
        }
        is[i][j] = true;
        rec(board,is,word,i+1,j,curr,index);
        rec(board,is,word,i-1,j,curr,index);
        rec(board,is,word,i,j+1,curr,index);
        rec(board,is,word,i,j-1,curr,index);
        is[i][j]=false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> is(board.size(),vector<bool>(board[0].size(),false));
        for(int row=0;row<board.size();row++){
            for(int col=0;col<board[0].size();col++){
                rec(board,is,word,row,col);
            }
        }
        return res;
    }
};
