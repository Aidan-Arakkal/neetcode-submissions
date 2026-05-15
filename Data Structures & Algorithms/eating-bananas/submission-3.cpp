class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *std::max_element(piles.begin(),piles.end());
        int low = 1;
        int hours = 0;
        int mineat = high;
        while(low<=high){
            int index = low+(high-low)/2;
            hours = 0;
            for(int i = 0; i<piles.size();i++){
                hours += ((piles[i]+index-1)/index);
            }
            if(hours<=h && index<mineat){
                mineat = index;
                high = index-1;

            }
            else{
                low = index+1;
            }


        }
        return mineat;

    }
};
