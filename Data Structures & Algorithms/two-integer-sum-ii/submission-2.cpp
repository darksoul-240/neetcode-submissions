class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int i=0;
        int n=num.size();
        int j=n-1;
        while(i<=j){
            int m=(i+j)/2;
            if(num[i]+num[j]<target){
                i++;
            }
            else if(num[i]+num[j]>target){
                j--;
            }
            else if(num[i]+num[j]==target){
                return {i+1,j+1};
            }
        }
        return {};
    }
};
