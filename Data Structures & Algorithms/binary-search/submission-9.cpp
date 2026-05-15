class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int num = 0;
        int low = 0;
        int index = 0;
        while(low<=high ){
            index =low+((high-low)/2);
            int num = nums[index];
            if(target == num){
                return index;
            }
            if(num>target){
                high = index-1;
            }
            if(target>num){
                low = index+1;
            }
        }
        return -1;
    }
};
