class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long sum = 0;
        long long squared_sum = 0;
        
        for(int i=0; i<n; i++){
            sum += arr[i];
            squared_sum += 1LL * arr[i] * arr[i];
        }
        
        long long linear_diff = sum - 1LL*n*(n+1)/2;         // a - b
        long long squared_diff = squared_sum - 1LL*n*(n+1)*(2*n+1)/6; // a² - b²
        
        long long num_sum = squared_diff/linear_diff;
        
        int a = (num_sum + linear_diff)/2;
        int b = num_sum - a;
        
        return {(int)a, (int)b};
    }
};