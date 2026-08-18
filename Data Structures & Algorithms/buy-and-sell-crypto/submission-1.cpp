class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<=1){
            return 0;
        }
        int prof=-1;
        for(int i=0;i<n-1;i++){
            for(int j=i;j<n;j++){
                prof=max(prof,prices[j]-prices[i]);
            }
     }   
     return prof;
    }
};
