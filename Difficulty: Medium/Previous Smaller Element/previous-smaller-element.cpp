class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        int n = arr.size();
        stack<int> st;
        vector<int> result(n, -1);
        
        for(int i=0; i<n; i++){
            
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()) result[i] = arr[st.top()];
            st.push(i);
        }
        return result;
    }
};