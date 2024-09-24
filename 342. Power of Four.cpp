class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<0)
            return false;
        unsigned long long  x = 1;
        while(x<n)
            x*=4;
        if(x==n)
            return true;
        return false;
    }
};