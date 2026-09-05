class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        // int r = (m*n)-1;
        int m = matrix.size();
        int n = matrix[0].size();
        int r = (m*n)-1;

        while(l<=r){
            int mid = l +((r-l)>>1);
            int cr = mid / n ;
            int cc = mid % n;
            if(matrix[cr][cc] == target) return 1;
            else if(matrix[cr][cc] > target){
                r = mid - 1;
            } 
            else{
                l = mid+1;
            }
        }

        return 0;
        
    }
};
