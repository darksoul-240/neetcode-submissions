class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>um;
        for(int i:nums){
            um[i]++;
        }
        vector<int>res;
        vector<pair<int,int>>num;
        for(auto& p:um){
            num.push_back({p.second,p.first});
        }
        sort(num.rbegin(),num.rend());
        for(int i=0;i<k;i++){
            res.push_back(num[i].second);
        }
        return res;
    }
};
