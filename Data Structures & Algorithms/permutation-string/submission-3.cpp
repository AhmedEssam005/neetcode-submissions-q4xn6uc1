class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int freq1[26]={0};
       for(auto a:s1){
        freq1[a-'a']++;
       } 

       int freq2[26]={0};
       int l=0,r=0;

       while(r<s2.size()){
        int c2=s2[r]-'a';
        if(freq1[c2]==0){
            while(l<r){
                freq2[s2[l]-'a']--;
                l++;
            }
            r++;
            l=r;
            continue;
        }
        else if(freq2[c2]>=freq1[c2]){
            while(freq2[c2]>0&&l<r){
                freq2[s2[l]-'a']--;
                l++;
            }
        }
        freq2[c2]++;
        if(r-l+1==s1.size()) return true;
        r++;
       }
       return r-l==s1.size();
    }
};
