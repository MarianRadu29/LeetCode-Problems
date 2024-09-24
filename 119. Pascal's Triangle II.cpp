#include"headers.h"

class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<vector<int>> result;
        result.push_back({ 1 });
        if (rowIndex == 0)
            return result[rowIndex];
        result.push_back({ 1,1 });
        if (rowIndex ==1)
            return result[rowIndex];
        for (int i = 2; i <= rowIndex; i++)
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
        return result[rowIndex];
    }
};