class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        if(row==1&&col==1){
            return target==matrix[0][0];
        }
        int low=0;
        int high=(row*col)-1;
        while(low<=high){
            int mid=(low+high)/2;
            int i=mid/col;
            int j=mid%col;
            if(matrix[i][j]<target){
                low=mid+1;
            }
            else if(matrix[i][j]>target){
                high=mid-1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
