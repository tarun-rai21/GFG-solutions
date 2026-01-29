//solved by Tarun

class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long sum = 0;
        long long n = arr.size();
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }
        long long total = ((n+2)*(n+1)/2);
        return (int)(total - sum);
    }
};