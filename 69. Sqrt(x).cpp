class Solution {
public:
    int mySqrt(int x) {
        unsigned long long  i=0;
        while(i*i<=x)
            i++;
        return i-1;
    }
};