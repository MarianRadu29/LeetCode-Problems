class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)
            return false;
        //n = abs(n);
        int count = 0;
        while(n)
        {
            if(n%2==1)
                count++;
            n/=2;
        }
        if(count==1)
            return true;
        return false;
    }
};