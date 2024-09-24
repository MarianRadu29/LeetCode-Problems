#include"headers.h"

class Solution {
public:
    string addBinary(string a, string b) 
    {
        int a_len = a.length()-1;
        int b_len = b.length()-1;
        string result;
        int carry = 0;
        while (a_len >= 0 && b_len >= 0)
        {
            int aa = a[a_len] - '0';
            int bb = b[b_len] - '0';
            if (aa + bb + carry == 2)
            {
                carry = 1;
                result.insert(0, 1, '0');
            }
            else
            {
                if (aa + bb + carry == 3)
                {
                    carry = 1;
                    result.insert(0, 1, '1');
                }
                else
                {   
                    result.insert(0, 1, char('0' + aa + bb + carry));
                    carry = 0;
                }
            }
            a_len--;
            b_len--;
        }
        if (a_len>=0)
        {
            while (a_len >= 0)
            {
                int aa = a[a_len] - '0';
                if (carry + aa == 2)
                {
                    carry = 1;
                    result.insert(0, 1, '0');
                }
                else
                {
                    result.insert(0, 1, char('0' + carry + aa));
                    carry = 0;
                }
                a_len--;
            }
        }
        if (b_len>=0)
        {
            while (b_len >= 0)
            {
                int bb = b[b_len] - '0';
                if (carry + bb == 2)
                {
                    carry = 1;
                    result.insert(0, 1, '0');
                }
                else
                {
                    result.insert(0, 1, char('0' + carry + bb));
                    carry = 0;
                }
                b_len--;
            }
        }
        if (carry == 1)
            result.insert(0, 1, '1');
        return result;
        
    }
};