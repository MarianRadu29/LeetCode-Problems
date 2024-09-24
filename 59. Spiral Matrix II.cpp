#include"headers.h"

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n));
        int k =1;
        int r1 = 0 , c1 =n-1 , r2 = n-1 , c2 = 0 ;
        int i;
        while(k<=n*n)
        {
            for( i=c2;i<=c1 && k<=n*n;i++)
                {
                    matrix[r1][i] = k;
                    k++;
                }
            r1++;
            
            for(i = r1;i<=r2 && k<=n*n;i++ )
            {
                matrix[i][c1] = k;
                k++;
            }
            c1--;

            for(i= c1;i>=c2 && k<=n*n;i--)
            {
               matrix[r2][i] = k;
                k++;
            }
            r2--;

            for(i=r2;i>=r1 &&  k<=n*n ;i--)
            {
                matrix[i][c2] = k;
                k++;
            }
            c2++;
        }   
        return matrix;
    }
};