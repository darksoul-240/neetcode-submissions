class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>um;
        vector<vector<string>>res;
        for(string s:strs){
            string t=s;
            sort(t.begin(),t.end());
            um[t].push_back(s);
        }
        for(auto& it:um){
            res.push_back(it.second);
        }
        return res;
    }
};
