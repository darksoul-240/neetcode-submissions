class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>um;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int tar=target-nums[i];
            auto it=um.find(tar);
            if(it!=um.end() && um[tar]!=i){
                return {i, um[tar]};
            }
            

        }
    }
};
