class Solution {
public:
    int characterReplacement(string st, int k) {
        unordered_set<char>s(st.begin(),st.end());
        int res=0;
        for(char c:s){
            int cnt=0,l=0;
            for(int r=0;r<st.size();r++){
                if(st[r]==c){
                    cnt++;
                }
                while((r-l+1)-cnt>k){
                    if(st[l]==c){
                        cnt--;
                    }
                    l++;
                }
                res=max(res,(r-l+1));
            }
        }
        return res;

    }
};
