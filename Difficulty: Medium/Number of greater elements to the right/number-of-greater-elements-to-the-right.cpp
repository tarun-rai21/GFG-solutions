
class Solution {
  public:

    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        // code here
        int n_arr = arr.size();
        int n_indx = indices.size();
        vector<int> result;
        
        for(int i=0; i<n_indx; i++){
            int count = 0;
            for(int j=indices[i]+1; j<n_arr; j++){
                if(arr[indices[i]]<arr[j]) count++;
            }
            result.push_back(count);
        }
        return result;
    }
};