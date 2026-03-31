class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size();
        
        //reverse columns
        for(int i=0; i<n; i++){
            for(int j=0; j<n/2; j++){
                swap(mat[j][i], mat[n-1-j][i]);
            }
        }
        
        //reverse rows
        for(int i=0; i<n; i++){
            for(int j=0; j<n/2; j++){
                swap(mat[i][j], mat[i][n-1-j]);
            }
        }
    }
};