class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector <unordered_set<char>> row(9);
        vector <unordered_set<char>> col(9);
        vector <unordered_set<char>> box(9);
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                char ele=board[r][c];
                int boxIndex=((r/3)*3) + (c/3);
                if(ele == '.') continue;

                if(row[r].find(ele)!=row[r].end()
                ||col[c].find(ele)!=col[c].end()
                ||box[boxIndex].find(ele)!=box[boxIndex].end()
                ) return false;
                else {
                    row[r].insert(ele);
                    col[c].insert(ele);
                    box[boxIndex].insert(ele);
                }
            
            }
        }


        return true;

    }
};
