// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        
        int low = 0;
        int high = arr.size()-1;
        
        while(low<high){
            if(arr[low]==0) low++;
            
            else if(arr[high]==1) high--;
            
            else {
            // arr[low] == 1 && arr[high] == 0
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
            
        }
    }
};