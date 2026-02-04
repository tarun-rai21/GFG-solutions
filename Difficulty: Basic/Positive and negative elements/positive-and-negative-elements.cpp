

class Solution {
  public:
    vector<int> arranged(vector<int>& arr) {
        int n = arr.size();
        vector<int> negative_nums;
        vector<int> positive_nums;

        for(int i=0; i<n; i++){
            if(arr[i]<0){
                negative_nums.push_back(arr[i]);
            }
            else{
                positive_nums.push_back(arr[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(i%2==0){
                arr[i] = positive_nums[i/2];
            }
            else{
                arr[i] = negative_nums[i/2];
            }
        }
    return arr;
        
    }
};