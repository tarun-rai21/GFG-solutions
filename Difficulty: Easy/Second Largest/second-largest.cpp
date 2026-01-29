class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        // int largest = -1;
        // int second_largest = -2;
        
        // int n=arr.size();
        
        // for(int i=0; i<n; i++){
            
        //     if(arr[i]>second_largest){
                
        //         if(arr[i]>largest){
        //             int temp = largest;
        //             largest = arr[i];
        //             second_largest = temp;
        //         }
                
        //         if(arr[i]<largest){
        //             second_largest = arr[i];
        //         }
                
        //     }
        // }
        
        // if(largest == second_largest) return -1;
        // return second_largest;
        

    int n = arr.size();
    if (n < 2) return -1;

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        
        // New largest found
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        // Update second largest (must be distinct)
        else if (arr[i] < largest && arr[i] > second_largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) return -1;
    return second_largest;


    }
};

