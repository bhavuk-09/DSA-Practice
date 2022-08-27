class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int profit=0;
        
        while(i< prices.size()-1){ 
            int cur=i;
            while(prices[i] < prices[i+1] ){
                i++;
                if(i == prices.size()-1){
                    break;
                }
            }
            profit+= prices[i]-prices[cur];    
            if (i< prices.size()-1)
                i++;
        }
        return profit;
    }
};
