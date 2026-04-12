class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int left = 0;
        int right = n-1;
        int max_water = 0;
        
        while(left<right){
            int curr_water = min(arr[left], arr[right]) * (right-left);
            max_water = max(max_water, curr_water);
            
            if(arr[left]<=arr[right]) left++;
            else right--;
        }
        return max_water;
    }
};