#include"headers.h"

class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    if (n < 3 || m < 3)
        return 0;

    int result = 0;
    for (int i = 0; i < n - 2; i++)
        for (int j = 0; j < m - 2; j++)
        {   
            array<int, 10> aux;
            aux.fill(0);
            int sum = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
            bool sw = true;
            for (int k = i; k < i + 3 && sw == true; k++)//liniile
            {   
                if (grid[k][j] > 9)
                    sw = false;
                else
                    aux[grid[k][j]]++;

                if (grid[k][j + 1] > 9)
                    sw = false;
                else
                    aux[grid[k][j+1]]++;

                if (grid[k][j + 2] > 9)
                    sw = false;
                else
                    aux[grid[k][j+2]]++;

                if (sum != (grid[k][j] + grid[k][j + 1] + grid[k][j + 2]))
                    sw = false;
                
            }
            for (int i = 1 ;i<aux.size() && sw==true; i++)
                if (aux[i] != 1)
                    sw = false;


            for (int k = j; k < j + 3 && sw == true; k++)//coloanele
            {
                if (sum != (grid[i][k] + grid[i + 1][k] + grid[i + 2][k]))
                    sw = false;
            }

            if (sum != (grid[i][j] + grid[i + 1][j + 1] + grid[i + 2][j + 2]))
                sw = false;

            if (sum != (grid[i][j + 2] + grid[i + 1][j + 1] + grid[i + 2][j]))
                sw = false;

            
            if (sw)
                result++;

        }

    return result;
}
};