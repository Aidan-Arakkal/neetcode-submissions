#include<unordered_map>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_map<int,int> track;
        if(nums.size() == 0){
            return 0;
        }
        int max = 1;
        vector<int> copy = nums;
        std::sort(copy.begin(),copy.end());
        for(int i : copy){
            if(track.count(i-1)){
                track[i]=track[i-1]+1;
                if(track[i]>max){
                    max = track[i];
                }
            }
            else{
                track[i]=1;
            }
        }
        return max;
    }
};
