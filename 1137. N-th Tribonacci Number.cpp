class Solution {
public:
    int tribonacci(int n) {
        int a = 0 , b=1 , c=1,z;
        if(n==0)
            return a;
        if(n==1)
            return b;
        if(n==2)
            return c;
        for(int i=3;i<=n;i++)
        {
            z = a+b+c;
            a =b;
            b = c;
            c = z;
        }
        return z;

    }
};