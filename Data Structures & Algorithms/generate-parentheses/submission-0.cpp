class Solution {
public:
    vector<string> res;
    void rec (int n , int open=0 , int closed=0 , string s=""){
        if(open==n&&open==closed){
            res.push_back(s);
            return;
        }
        if(open<n)  rec(n,open+1,closed,s+"(");
        if(closed<n&&closed<open) rec(n,open,closed+1,s+")");
    }
    vector<string> generateParenthesis(int n) {
        rec(n);
        return res;
    }
};
