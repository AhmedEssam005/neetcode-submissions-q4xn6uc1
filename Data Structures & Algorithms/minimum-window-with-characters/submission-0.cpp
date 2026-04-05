class Solution {
private:
    bool isValid(const string& t, map<char,int>& mpt, map<char,int>& mps){
        for(const char& a:t){
            if(mps[a]<mpt[a]) return false;
        }
        return true;
    }
public:
    string minWindow(string s, string t) {
        map<char,int> mpt,mps;
        string ans="",temp="";
        int l=0,r=0;
        for(const char&a:t) mpt[a]++;
        while(r<s.size()){
            char a=s[r];
            if(mpt.find(a)!=mpt.end()||l-r !=0){
                mps[a]++;
            }
            else{
                l++;
            }
            if(isValid(t,mpt,mps)){
                while(isValid(t,mpt,mps)){
                    mps[s[l]]--;
                    l++;
                }
                ans=(r-l+2<ans.size()||ans.empty())?s.substr(l-1,r-l+2):ans;
                while(mpt.find(s[l])==mpt.end()){
                    mps[s[l]]--;
                    l++;
                }
            }
            r++;
        }
        return ans;
    }
};
