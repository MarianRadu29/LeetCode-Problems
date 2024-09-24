#include"headers.h"

class Solution {
public:
  bool isSubsequence(string s, string t) {
    if (s.size() == 0)
        return true;
    if (s.size() > t.size())
        return false;

    int start = t.find_first_of(s[0], 0);
    if (start == string::npos)
        return false;
    int current = start;
    int i = 1;
    while (current != string::npos && i<s.size())
    {
        current = t.find_first_of(s[i], start + 1);
        if (current != string::npos)
            {
                i++;
                start = current;
            }
        else
        {
            return false;
        }
    }
    if(i==s.size())
        return true;
    return false;
}
};