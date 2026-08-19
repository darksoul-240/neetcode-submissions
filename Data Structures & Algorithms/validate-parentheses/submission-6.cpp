class Solution {
public:
    bool isValid(string st) {
        stack<char>s;
        if(st.size()<=1){return false;}
        for(char c:st){
            if((c=='(')||(c=='[')||(c=='{')){
                s.push(c);
            }
            else{
            if(s.empty()){return false;}
            char t=s.top();
            if((t=='(' && c==')')||(t=='{' && c=='}')||(t=='[' && c==']')){
                s.pop();
            }
            else{
                return false;
            }
            }
        }
        return s.empty();
    }
};
