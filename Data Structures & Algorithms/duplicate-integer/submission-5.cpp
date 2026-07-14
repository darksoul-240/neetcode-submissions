class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        /* sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
               return true;
            }
        }return false; */
        set<int>s;
        for(int i:nums){
            s.insert(i);
        }
        return s.size()!=nums.size();

    }
};