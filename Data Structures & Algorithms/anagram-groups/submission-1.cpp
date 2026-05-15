#include <unordered_map>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string,std::vector<string>> map;
        for(std::string a : strs){
            std:: string key_string = a;
            std::sort(key_string.begin(),key_string.end());
            if(map.count(key_string)){
                map[key_string].push_back(a);
            }
            else{
                map[key_string] = {a};
            }
            
        }
        std::vector<vector<string>> result;
        for (auto a : map ){
            result.push_back(a.second);
        }
        return result;

    }
};
