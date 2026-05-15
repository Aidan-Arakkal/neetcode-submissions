class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int i = 0;
        int j = i+1;
        while(i!=j && i<prices.size() && j<prices.size()){
            maxprofit = std::max(maxprofit,prices[j]-prices[i]);
            if(prices[j]-prices[i]<0){
                i = j;
                j++;
            }
            else{
                j++;
            }
        }
        return maxprofit;
    }
};
