class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(int i=0;i<strs.size();i++){
            s+=to_string(strs[i].size());
            s+='#';
            s+=strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> st;
        string str="";
        int i=0;
        while(i<s.size()){
            string sir="";
            int t;
            while(s[i]!='#'){
                sir.push_back(s[i]);
                t=stoi(sir);
                i++;
            }
            i++;
            str=s.substr(i,t);
            i+=t;
            st.push_back(str);
        }
        return st;
    }
};
