#include"headers.h"

class Solution {
public:
    bool isPalindrome(string s) {
    string result;
    for (char c : s)
    {
        if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            if (c >= 'A' && c <= 'Z')
                c += 32;
            result.append(1, c);
        }       
    }
    
    for (int i = 0; i < result.size() / 2; i++)
        if (result[i] != result[result.size() - i - 1])
            return false;
    return true;
}
};