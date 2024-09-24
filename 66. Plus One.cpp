#include"headers.h"

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    if (digits[digits.size() - 1] == 9)
    {
        digits[digits.size() - 1] = 0;
        int carry = 1, n = digits.size() - 2;
        while (carry && n>=0)
        {
            digits[n] = digits[n] + carry;
            carry = digits[n] / 10;
            digits[n] = digits[n] % 10;
            n--;
        }
        if (carry==1)
        {   
            vector<int> aux;
            aux.push_back(1);
            for (int i : digits)
                aux.push_back(i);
            digits = aux;
        }
    }
    else
        digits[digits.size() - 1]++;
    return digits;
            
}
};