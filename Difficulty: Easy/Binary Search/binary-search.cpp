class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        
        int low = 0;
        int high = (arr.size() - 1);
        int ans = -1;
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(arr[mid]==k){
                ans = mid;
                high = mid-1; //move left
            }
            
            else if(k > arr[mid]){
                low = mid+1;
            }
            
            else if(k < arr[mid]){
                high = mid-1;
            }
    
            
        }
        
        return ans;
    }
};