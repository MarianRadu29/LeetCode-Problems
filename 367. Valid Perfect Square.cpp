#include"headers.h"

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<0)
            return false;
        if(int(sqrt(num))*int(sqrt(num))==num)
            return true;
        return false;
    }
};