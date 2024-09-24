#include"headers.h"

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
    result.push_back({ 1 });
    if (numRows == 1)
        return result;
    result.push_back({ 1,1 });
    if (numRows == 2)
        return result;
    for (int i = 2; i < numRows; i++)
    {
        vector<int> aux;
        aux.push_back(1);
        for (int j = 1; j < i ; j++)
        {
            aux.push_back(result[i - 1][j - 1] + result[i - 1][j]);
        }
        aux.push_back(1);
        result.push_back(aux);
    }
    return result;

}
};