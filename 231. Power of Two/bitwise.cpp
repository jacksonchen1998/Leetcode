class Solution{
    public:
      bool isPowerOfTwo(int n){
        long long num = n;
        return ((num & -num) == num) && num;
      }
};
