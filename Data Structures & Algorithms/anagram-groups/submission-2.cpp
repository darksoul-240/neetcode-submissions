class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>um;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            um[s].push_back(strs[i]);
        }
        vector<vector<string>>res;
        for(auto& t:um){
            res.push_back(t.second);
        }
        return res;
    }
};
