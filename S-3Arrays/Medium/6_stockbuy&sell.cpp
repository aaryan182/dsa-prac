// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;  
        int maxProfit = 0;       

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            } else {
                int profit = price - minPrice;
                maxProfit = max(maxProfit, profit);
            }
        }
        return maxProfit;
    }
};