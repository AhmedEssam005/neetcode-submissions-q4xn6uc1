class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int maxCount=0;
        map<char,int> mp;
        while(r<s.size()){
            if(mp[s[r]]>0){
                maxCount=max(r-l,maxCount);
                while(mp[s[r]]>0){
                    mp[s[l]]--;
                    l++;
                }
            }
            mp[s[r]]++;
            r++;
        }
        return max(maxCount,r-l);
    }
};
