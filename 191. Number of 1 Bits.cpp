#include"headers.h"

class Solution {
public:
    int hammingWeight(int n) {
        string binary;
        for (int i = 0; i < 32; ++i) {
            binary.append(1,'0');
        }

        int count = 0;
        for (int i = 31; i >= 0 && n != 0; --i) {
            binary[i] = (n % 2) + '0';
            if(binary[i]=='1')
                count++;
            n /= 2;
        }
        return count;
    
    }
};