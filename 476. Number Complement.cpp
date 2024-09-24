#include"headers.h"

class Solution {
public:
    int findComplement(int num) {
    string s;
    while (num)
    {
        s.insert(0,1, num % 2 + '0');
        num /= 2;
    }
    for (char& c : s)
        if (c == '1')
            c = '0';
        else
            c = '1';
    int nr = 0;//n = 2 s = "10" nr=1 s = "01"
    for (int i=s.size()-1;i>=0;i--)
    {
        nr = nr + (s[i] - '0') * pow(2, s.size()-i-1);
    }
    return nr;

}
};