#include <unordered_set>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = l;
        int max = 0;
        int current =0;
        std::unordered_set<char> found;
        while(l<s.size()&&r<s.size()){
            if(found.count(s[r])== 0){
                found.insert(s[r]);
                r++;
                current = found.size();
                max = std::max(current,max);
            }
            else{
                found.erase(s[l]);
                l++;
            }
        }
        return max;
            

    }
};
