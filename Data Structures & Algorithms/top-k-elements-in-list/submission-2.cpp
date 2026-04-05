class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int , int> mp;
        for(int a : nums){
            if(mp.find(a)!=mp.end()){
                mp[a]+=1;
            }
            else{
                mp.insert({a,1});
            }
        }
        vector<pair<int,int>> v;
        for(const auto &a : mp){
            v.push_back({a.second,a.first});
        }
        sort(v.rbegin(),v.rend());
        vector <int> res(k);
        for(int i=0;i<k;i++){
            res[i]=v[i].second;
        }
        return res;

    }
};
