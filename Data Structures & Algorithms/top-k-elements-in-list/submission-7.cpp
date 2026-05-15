#include <unordered_map>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    int frequent = k;
    std::unordered_map<int,int> howmany;
    for (int amount : nums){
        
            howmany[amount]++;
        
    }
    std::vector<int> result;
    while(frequent>0){
        int max = 0;
        int index = 0;
        for(auto b : howmany){
            if(b.second>max){
                max = b.second;
                index = b.first;
            }
        }
        result.push_back(index);
        howmany[index]-=max;
        frequent-=1;
    }
        return result;
    }
    
};
