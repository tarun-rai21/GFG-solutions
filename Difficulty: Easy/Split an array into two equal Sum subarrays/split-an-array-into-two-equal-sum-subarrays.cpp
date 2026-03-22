class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        
        int n = arr.size();
        
        int prefix_sum = arr[0];
        int suffix_sum = 0;
        
        for(int i=1; i<n; i++){
            suffix_sum+=arr[i];
        }
        
        for(int k=1; k<n; k++){
            
            if(prefix_sum == suffix_sum) return true;
            else{
                prefix_sum+=arr[k];
                suffix_sum-=arr[k];
            }
            
        }
        return false;
        
    }
};
