//solved by Tarun


class Solution {
  public:
    unsigned int reverseBits(unsigned int n) {
        
        unsigned ans = 0;
        
        while(n>0){
            
            ans <<= 1;
            ans |= (n & 1);
            n >>= 1;
        }
        
        return ans;
        
    }
};