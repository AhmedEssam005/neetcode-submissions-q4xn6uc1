#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> count;
        for(char a : s){

                count[a]++;   
        }

        for(char a:t){
            if(count.find(a)!=count.end() && count[a]!=0)
            {
                count[a]--;
            }
            else{
                return false;
            }
        }

        return true;

    }
};
