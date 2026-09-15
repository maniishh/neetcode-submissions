class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int mnp = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            mp = max(mp, prices[i] - mnp);
            mnp = min(mnp, prices[i]);
        }
        return mp;
    }
};
