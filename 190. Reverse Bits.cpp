#include"headers.h"

class Solution {
public:
   uint32_t reverseBits(uint32_t n) {
    string binary;
        for (int i = 0; i < 32; ++i) {
            binary.append(1,'0');
        }
    
    for (int i = 31; i >= 0 && n != 0; --i) {
        binary[i] = (n % 2) + '0';
        n /= 2;
    }
    reverse(binary.begin(), binary.end());
    uint32_t result = 0;
    for (int i = 0; i < 32; ++i) {
        if (binary[i] == '1') {
            result += 1 << (32 - i - 1);
        }
    }
    return result;
}
};