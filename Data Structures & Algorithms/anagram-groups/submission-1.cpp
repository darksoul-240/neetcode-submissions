class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>um;
        for(string s:strs){
            string sortedS=s;
            sort(sortedS.begin(),sortedS.end());
            um[sortedS].push_back(s);
        }
        vector<vector<string>>res;
        for(auto& pair:um){
            res.push_back(pair.second);
        }
        return res;
    }
};
