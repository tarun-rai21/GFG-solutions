class Solution {
public:
    bool findPair(vector<int> &arr, int x) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int low = 0, high = 1;

        while (high < n && low < n) {
            
            if (low == high) {
                high++;
                continue;
            }

            int diff = arr[high] - arr[low];

            if (diff == x) return true;

            else if (diff < x) high++;

            else low++;
        }

        return false;
    }
};