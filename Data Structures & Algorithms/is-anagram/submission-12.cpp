class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char,int> map0;
        std::unordered_map<char,int> map1;
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i<s.length(); i++){
            map0[s[i]] = map0[s[i]]+1;
            map1[t[i]] = map1[t[i]]+1;
        }
        if(map0 == map1){
            return true;
        }
        return false;
    }
};
