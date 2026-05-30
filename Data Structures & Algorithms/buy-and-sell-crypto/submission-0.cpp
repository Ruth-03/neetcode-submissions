class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least= prices[0];
        int n =prices.size();
        int profit=0;
        int j;
        for (int i=0;i<n;i++){
            if (prices[i]<=least){
                least=prices[i];
                }
            else{
              profit=max(profit,prices[i]-least);
            }
           

            }
        return profit;
        
    }
};
