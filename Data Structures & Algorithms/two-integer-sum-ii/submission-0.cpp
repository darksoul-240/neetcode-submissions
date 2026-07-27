class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        int n=j+1;
        for(int i=0;i<n-1;i++){
            int num=target-numbers[i];
            for(int j=i+1;j<n;j++){
                if(numbers[j]==num){
                    return {i+1,j+1};
                }
            }
        }return {};
    }
};
