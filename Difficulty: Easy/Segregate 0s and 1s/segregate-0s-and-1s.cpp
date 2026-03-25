// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        
        int n = arr.size();
        int left = 0;
        int right = n-1;
        
        while(left<right){
            if(arr[left]==0 & arr[right]==1){
                left++;
                right--;
            }
            else if(arr[left]==1 & arr[right]==1){
                right--;
            }
            else if(arr[left]==0 & arr[right]==0){
                left++;
            }
            else{
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};