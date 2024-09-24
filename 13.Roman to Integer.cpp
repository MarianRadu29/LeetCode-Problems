#include"headers.h"


class Solution {
public:
    int romanToInt(string s) {
    map<char, int> MAP;
    MAP['I'] = 1;
    MAP['V'] = 5;
    MAP['X'] = 10;
    MAP['L'] = 50;
    MAP['C'] = 100;
    MAP['D'] = 500;
    MAP['M'] = 1000;

    int number = 0;
    for (unsigned i = 0; i < s.size() - 1; i++)
        if (MAP[s[i]] < MAP[s[i + 1]])
            number -= MAP[s[i]];
        else
            number += MAP[s[i]];
    number += MAP[s[s.size() - 1]];

    return number;

                
}
};