#include<unordered_map>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, vector<std::string>> map;
        for(std::string a: strs){
            std::string sorted = a;
            std::sort(sorted.begin(),sorted.end());
            if(map.count(sorted)){
                map[sorted].push_back(a);
            }
            else{
                map[sorted]={a};
            }
        }
        std::vector<vector<string>> result;
        for(auto res: map){
            result.push_back(res.second);
        }
        return result;
    }
};
