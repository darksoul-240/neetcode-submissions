class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
/*         int i=0,j=col-1;
 */        int i,j;
        for(i=0;i<row;i++){
            j=col-1;
            if(target<matrix[i][j]){
                for(int k=0;k<=j;k++){
                    if(target==matrix[i][k]){
                        return true;
                    }
                }
            }
            else if(target>matrix[i][j]){
                continue;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
