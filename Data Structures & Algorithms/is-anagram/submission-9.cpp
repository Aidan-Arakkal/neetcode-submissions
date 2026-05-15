#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        std::unordered_map<char,int> r;
        for (char a : s ){
            r[a]++;
        }
        for (char b : t){
            if(r.count(b)==0 || r[b]==0 ){
                return false;
            }
            r[b]--;
        }
        return true;
    }
};
