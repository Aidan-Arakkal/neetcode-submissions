class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //make map initalized by index i and then increment hash value each time
        //then iterate through map and print out the k highest
        //keep track of vector unique
        unordered_map<int, int> map;
        vector<int> unique;
        for(int i = 0; i< nums.size(); i++ ){
            map[nums[i]]++;
        }
        vector<pair<int,int>> array;
        for(auto j : map){
            array.push_back({j.second, j.first});
        }
        sort(array.rbegin(), array.rend());
        vector<int> res;
        for(int l = 0; l <k; l++){
            res.push_back(array[l].second);
        }
        return res;
    }
};
