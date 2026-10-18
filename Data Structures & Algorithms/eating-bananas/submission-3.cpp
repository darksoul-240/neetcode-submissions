class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=INT_MAX;
        int n=piles.size();
        if(n==1){return ceil((double)piles[0]/h);}
        int low=INT_MAX,high=INT_MIN;
        for(int i:piles){
            low=1;
            high=max(high,i);
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            vector<int>p=piles;
            for(int i=0;i<n;i++){
                p[i]=ceil((double)p[i]/mid);
                sum+=p[i];
                if(sum>h)break;
            }
            if(sum<=h){
                ans=mid;
                high=mid-1;
            }
            else if(sum>h){
                low=mid+1;
            }
           
        }
        return ans;
    }
};
