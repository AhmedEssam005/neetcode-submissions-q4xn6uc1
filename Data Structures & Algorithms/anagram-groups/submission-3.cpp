class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string,int> mp;
        vector<vector<string>> res;
        int count=0;
        for(string s: strs){
            string sorted=s;
            sort(sorted.begin(),sorted.end());
            if (mp.contains(sorted)){
                res[mp[sorted]].push_back(s);
            }
            else{
                mp.insert({sorted,count});
                res.insert(res.begin()+count,{s});
                count++;
            }
        } 
        return res;
    }
};