#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()){
            return false;
        }
        std::unordered_map<char,int> count;
        for (char a : s ){
            count[a]++;
        }
        for (char b : t){
            if(count.count(b)==0 || count[b]==0 ){
                return false;
            }
            count[b]--;
        }
        return true;
    }
};
