class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=9;
        for(int i=0;i<n;i++){
            set<int>s;
            int cnt=0;
            for(int j=0;j<n;j++){
                if(board[i][j]!='.'){
                    s.insert(board[i][j]);
                    cnt++;
                }
            }
            if(cnt!=s.size()){return false;}
        }
        for(int i=0;i<n;i++){
            set<int>s2;
            int cnt2=0;
            for(int j=0;j<n;j++){
                if(board[j][i]!='.'){
                    s2.insert(board[j][i]);
                    cnt2++;
                }
            }
            if(cnt2!=s2.size()){return false;}
        }
        for(int row=0;row<n;row+=3){
            for(int col=0;col<n;col+=3){
                set<int>s;
                int cnt=0;
                for(int i=row;i<row+3;i++){
                    for(int j=col;j<col+3;j++){
                        if(board[i][j]!='.'){
                            s.insert(board[i][j]);
                            cnt++;
                        }
                    }
                }
                if(cnt!=s.size()){
                    return false;
                }
            }
        }
        return true;
    }
};
