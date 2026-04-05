class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mpt,mps;
        string ans="";
        int l=0,r=0;
        int count=0;
        for(const char&a:t) mpt[a]++;
        while(r<s.size()){
            char a=s[r];
            mps[a]++;
            if(mpt.count(a)&&mps[a]==mpt[a]) count++;
            while(count==mpt.size()){
                ans=(r-l+1<ans.size()||ans.empty())?s.substr(l,r-l+1):ans;
                mps[s[l]]--;
                if(mpt.count(s[l])&&mps[s[l]]<mpt[s[l]]) count--;
                l++;
            }
            r++;
        }
        return ans;
    }
};
