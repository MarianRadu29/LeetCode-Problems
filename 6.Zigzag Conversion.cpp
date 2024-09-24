#include"headers.h"

class Solution {
public:
   string convert(string s, int numRows)
{
    vector<string> result(numRows);
    int k = 0;
    while (true)
    {
        //cout << "Verticala:\n";
        for (int i = 0; i < numRows && k<s.length(); i++)
        {
            result[i] += s[k];
            //cout <<i<<':'<< s[k] << ' ';
            k++;
        }
        //cout << "\nDiagonala:\n";

        for (int i = numRows - 2; i > 0 && k < s.length(); i--)
        {
            result[i] += s[k];
            //cout << i << ':' << s[k] << ' ';
            k++;
        }
        //cout << '\n';
        if (k == s.length())
            break;
    }
    //cout << "\n\n";
    string re;
    for (int i = 0; i < result.size(); i++)
    {
        re += result[i];
        //cout << result[i] << '\n';
    }
    return re;
}
};