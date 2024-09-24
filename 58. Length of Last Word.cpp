#include"headers.h"

class Solution {
public:
    int lengthOfLastWord(string s) {
    if (s.size() == 0)
        return 0;
    int n = s.size() - 1;
    while (n>=0 && s[n] == ' ')
        n--;
    if (n == -1)
        return 0;
    int count = 0;
    while (n>=0 && s[n] != ' ')
    {
        n--;
        count++;
    }
    return count;
}
};