#include"headers.h"

class Solution {
public:
    bool isHappy(int n) {
        map<int,bool> m;
        while (n != 1)
        {
            m.insert({ n,true });
            int number = 0;
            while (n)
            {
                number += (n % 10) * (n % 10);
                n /= 10;
            }
            n = number;
            if (m.find(n) != m.end())
                return false;
        }
        return true;
    }
};