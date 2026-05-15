
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> left = {1};
        std::vector<int> right(nums.size(),1);
        int multiple = 1;
        for(int i=1;i<nums.size(); i++){
            multiple*=nums[i-1];
            left.push_back(multiple);                        
        }
        multiple =1;
        for(int i = nums.size()-1; i>0;i--){
            right[i-1] = nums[i]*right[i];
        }
        std::vector<int> result;
        for(int i = 0; i<nums.size();i++){
            result.push_back(right[i]*left[i]);
        }
        return result;
    }
    
};
