class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        
        int n = arr.size();
        unordered_map<int, int>freq;
        
        for(int i=0; i<n; i++){
            freq[arr[i]]++;
        }
        for(auto it : freq){
            if(it.second > n/2) return it.first;
        }
        
        return -1;
    }
};