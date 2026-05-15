class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<int> sorted = nums;
        std::sort(sorted.begin(),sorted.end());
        int j = 0;
        int k = 0;
        std::vector<vector<int>> result = {};
        for(int i = 0; i<sorted.size()-2;i++){
            if(i>0 && sorted[i] == sorted[i-1]){
                continue;
            }
            j = i+1;
            k = sorted.size()-1;
            while(j<k){
                

                if(sorted[i]+sorted[j]+sorted[k] == 0){
                    result.push_back({sorted[i],sorted[j],sorted[k]});
                    int currentj = sorted[j]; 
                    int currentk = sorted[k];
                    
                    while(j<k && (sorted[j]==currentj)){
                    j++;
                    }
                    while(j<k && (sorted[k] == currentk)){
                    k--;
                    }
                }
                else if(sorted[i]+sorted[j]+sorted[k] > 0){
                    k--;
                }
                else if(sorted[i]+sorted[j]+sorted[k] < 0){
                    j++;
                }
                
            }

            
        }
        return result;
        }
    
};
