class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minm = prices[0];
        int prf = 0;
        for(int i=1; i < prices.size();i++){
            int cost = prices[i]-minm;
            prf = max(prf,cost);
            minm = min(minm,prices[i]); 
        }
        return prf;
    }
};
