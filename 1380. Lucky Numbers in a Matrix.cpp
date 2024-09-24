#include"headers.h"

class Solution {
public:
   vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> result;
        int n = matrix.size(), m = matrix[0].size();
        for(int i=0;i<n;i++)
            for (int j = 0; j < m; j++)
            {   
                bool sw = true;
                int number = matrix[i][j];
                for (int k = 0; k < m && sw; k++)
                    if (matrix[i][k] < number)
                        sw = false;
                
                for (int k = 0; k < n && sw; k++)
                    if (matrix[k][j] > number)
                        sw = false;

                if (sw)
                    result.push_back(number);
            }
        return result;
    }
};