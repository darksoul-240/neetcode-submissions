class Solution {
public:
    int maxProfit(vector<int>& p) {
        int b=0;
        int s=1;
        int n=p.size();
        if(n<=1){return 0;}
        int prof=0;
        while(s<n){
            if(p[b]>p[s] && s<n-1){
                b=s;
                s+=1;
            }
            if(p[b]<p[s]){
                prof=max(prof,p[s]-p[b]);
            }
            s++;
        }
        return prof;
    }
};
