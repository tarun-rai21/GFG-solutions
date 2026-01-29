class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = -1;
        int second_largest = -2;
        
        int n=arr.size();
        
        for(int i=0; i<n; i++){
            
            if(arr[i]>second_largest){
                
                if(arr[i]>largest){
                    int temp = largest;
                    largest = arr[i];
                    second_largest = temp;
                }
                
                if(arr[i]<largest){
                    second_largest = arr[i];
                }
                
            }
        }
        
        if(largest == second_largest) return -1;
        return second_largest;
    }
};