// Solved by Tarun

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int range =(arr.size()-1)/2;
        int temp;
        int size = arr.size()-1;
        
        for(int i=0; i<=range; i++){
            temp = arr[i];
            arr[i]=arr[size-i];
            arr[size-i]= temp;
        }
    }
};