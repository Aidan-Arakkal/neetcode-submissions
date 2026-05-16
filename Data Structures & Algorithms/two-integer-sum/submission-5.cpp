class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answers;
        //target addition, index
        std::unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); i++){
            if(map.count(target - nums[i])!= 0){
                answers.push_back(map[target-nums[i]]);
                answers.push_back(i);
                return answers;
            }
            map[nums[i]] = i;
        }
        return answers;
        
    }
};
