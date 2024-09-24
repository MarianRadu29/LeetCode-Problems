#include"headers.h"

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    set<int> coloana;
    set<int> linie;
    for (int i = 0; i < matrix.size(); i++)
        for (int j = 0; j < matrix[0].size(); j++)
            if (matrix[i][j] == 0)
            {   
                linie.insert(i);
                coloana.insert(j);
            }
    for (int i : linie)
    {
        for (int k = 0; k < matrix[0].size(); k++)
            matrix[i][k] = 0;
    }

    for (int i : coloana)
    {
        for (int k = 0; k < matrix.size(); k++)
            matrix[k][i] = 0;
    }
                
}
};