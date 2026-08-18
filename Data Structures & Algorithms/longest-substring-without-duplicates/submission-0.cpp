class Solution {
public:
    int lengthOfLongestSubstring(string st) {
        unordered_set<char>s;
        int l=0;
        int sz=0;
        for(int r=0;r<st.size();r++){
            while(s.find(st[r])!=s.end()){
                s.erase(st[l]);
                l++;
            }
            s.insert(st[r]);
            sz=max(sz,r-l+1);
        }
        return sz;
    }
};
