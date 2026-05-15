#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> t;
        for(int i=0;i<nums.size();i++){
            if(t.count(nums[i])!=0){
                return{t[nums[i]],i};
            }
            else{
                int a = target - nums[i];
                t[a]=i;
            }
        }
        return{};
    }
};
