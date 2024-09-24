#include"headers.h"

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int k =0;
        int r1 = 0 , c1 = matrix[0].size()-1 , r2 = matrix.size()-1 , c2 = 0 ;
        int i;
        while(k<matrix[0].size()*matrix.size())
        {
            for( i=c2;i<=c1 && k<matrix[0].size()*matrix.size();i++)
                {
                    result.push_back(matrix[r1][i]);
                    k++;
                }
            r1++;
            
            for(i = r1;i<=r2 && k<matrix[0].size()*matrix.size();i++ )
            {
                result.push_back(matrix[i][c1]);
                k++;
            }
            c1--;

            for(i= c1;i>=c2 && k<matrix[0].size()*matrix.size();i--)
            {
                result.push_back(matrix[r2][i]);
                k++;
            }
            r2--;

            for(i=r2;i>=r1 &&  k<matrix[0].size()*matrix.size() ;i--)
            {
                result.push_back(matrix[i][c2]);
                k++;
            }
            c2++;
        }   
        return result;
    }
};