class Solution {
public:
    bool isPalindrome(string s) {
        erase(s,' ');
        int i=0;
        int j=s.size()-1;
        while(j>i){
            if(!isalnum(s[i])){
                i++;
            }
            if(!isalnum(s[j])){
                j--;
            }
            if(isalnum(s[i])&&isalnum(s[j])){
                if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            else{
                i++;
                j--;
            }
            }
           
        }return true;
    }
};
