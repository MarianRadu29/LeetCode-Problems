#include"headers.h"

class Solution {
public:
    bool isAnagram(string s, string t) {
    if (s.size() != t.size())
        return false;
    map<char, int> m;

    for (char c : s)
        if (m.find(c) == m.end())
            m[c] = 1;
        else
            m[c]++;

    map<char, int> n;
    for (char c : t)
        if (n.find(c) == n.end())
            n[c] = 1;
        else
            n[c]++;

    for (auto it : m)
    {
        if (n.find(it.first) == n.end())
            return false;
        if (n[it.first] != it.second)
            return false;
    }
    return true;
}
};