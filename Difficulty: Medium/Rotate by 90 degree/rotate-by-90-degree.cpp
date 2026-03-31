class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        
        int n = mat[0].size();
        
        //Transpose
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        //reverse each column
        for(int i=0; i<n; i++){ //traverse each column
            for(int j=0; j<n/2; j++){ //traverse each element
                swap(mat[j][i], mat[n-1-j][i]);
            }
        }
    }
};
