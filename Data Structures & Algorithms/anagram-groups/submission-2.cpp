
#include <unordered_map>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string,vector<std::string>> map;
        for(std::string orig : strs){
            std::string key = orig;
            std::sort(key.begin(),key.end());
            if(map.count(key)){
                map[key].push_back(orig);
            }
            else{
                map[key]={orig};
            }
        }
        vector<vector<string>> result;
        for(auto res : map){
            result.push_back(res.second);
        }
        return result;
    }
};
