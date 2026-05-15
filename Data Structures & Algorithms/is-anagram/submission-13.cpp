class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        std::unordered_map<char,int> map;
        for(int i =0; i<s.length(); i++){
            map[s[i]]++;
        }
        std::unordered_map<char,int> map1;
        for(int i =0; i<s.length(); i++){
            map1[t[i]]++;
        }
        if(map != map1){
            return false;
        }
        return true;
    }
};
