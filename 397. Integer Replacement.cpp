#include"headers.h"
class Solution {
public:
    void f(long int n, int count, int& min)
    {
        if (n == 1)
        {
            if (min > count)
                min = count;
            return;
        }
        if (n % 2 == 0)
            f(n / 2, count+1, min);
        else
        {
            f(n + 1, count + 1, min);
            f(n - 1, count + 1, min);
        }
    }
    int integerReplacement(int n) {
        int result = INT32_MAX;
        f(n, 0, result);
        return result;
    }
};