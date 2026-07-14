class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
/*                 cout<<"true"<<endl;
 */                return true;
            }
        }return false;

    }
};