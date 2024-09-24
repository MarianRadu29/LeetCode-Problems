#include"headers.h"

class Solution {
public:
   vector<int> findPeakGrid(vector<vector<int>>& mat) {
    bool sw = false;
    int i, j;
    for (i = 0; i < mat.size() && sw == false; i++)
    {
        for (j = 0; j < mat[0].size(); j++)
        {   
            cout << mat[i][j] << ' ';
            if (i - 1 >= 0)
                if (mat[i][j] < mat[i - 1][j])
                    continue;

            if (i + 1 < mat.size())
                if (mat[i][j] < mat[i + 1][j])
                    continue;

            if (j + 1 < mat[i].size())
                if (mat[i][j] < mat[i][j + 1])
                    continue;

            if (j - 1 >= 0)
                if (mat[i][j] < mat[i][j - 1])
                    continue;
            sw = true;
            break;
        }
    }
    return { i-1,j };
}
};