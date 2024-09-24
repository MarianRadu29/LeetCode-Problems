class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<0)
            return false;
       unsigned long long int x=1;
        while(x<n)
            x*=3;
        if(x==n)
            return true;
        return false;
    }
};