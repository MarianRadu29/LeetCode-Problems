#include"headers.h"


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string result = "";
    if (strs.empty()==true)
        return result;
    int min = 201;
    bool ok = true;
    for (string i : strs)
    {
        if (i.size() < min)
            min = i.size();

        if (i.size() > 0)
            ok = false;
    }
    if (ok == true)
        return result;

    bool sw = true;
    for (unsigned j = 0; j < min && sw == true; j++)
    {
        char c = strs[0][j];
        for (unsigned k = 1; k < strs.size() && sw == true; k++)
            if (strs[k][j] != c)
                sw = false;

        if (sw == true)
            result.append(1, strs[0][j]);
    }

    return result;
}
};