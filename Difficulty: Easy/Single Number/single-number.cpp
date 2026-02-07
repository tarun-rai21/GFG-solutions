//solved by Tarun


class Solution {
  public:
    int getSingle(vector<int>& arr) {
        int ans = 0;
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            ans^=arr[i];
        }
        
        return ans;
        
    }
};