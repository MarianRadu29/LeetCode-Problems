#include"headers.h"

class Solution {
public:
   vector<int> findDiagonalOrder(vector<vector<int>>& mat) 
    {
        int m = mat.size();//linii
        int n = mat[0].size();//coloane
        if (n > 1 && m > 1)
        {
            vector<vector<int>> lists;
            for (int i = 0; i < m; i++)
            {
                int k = i;
                vector<int> aux;
                while (k >= 0 && i-k<n)
                {   
                    cout<<mat[k][i - k]<<' ';
                    aux.push_back(mat[k][i - k]);
                    k--;
                }
                lists.push_back(aux);
            }

            for (int i = 1; i < n; i++)
            {
                int k = i;
                int l = m - 1;
                vector<int> aux;
                while (k < n && l >= 0)
                {   
                    cout<<mat[l][k]<<' ';
                    aux.push_back(mat[l][k]);
                    k++;
                    l--;
                }
                lists.push_back(aux);
            }
            /*
            for (auto v : lists)
            {
                for (auto i : v)
                    cout << i << ' ';
                cout << '\n';
            }
            */
            vector<int> result;
            for (int i = 0; i < lists.size(); i++)
                if (i % 2 == 0)
                {
                    for (int j : lists[i])
                        result.push_back(j);
                }
                else
                {
                    for (int j = lists[i].size() - 1; j >= 0; j--)
                        result.push_back(lists[i][j]);
                }
            return result;
        }
        
        if (m == 1)//daca este doar o linie
        {
            vector<int> result;
            for (int i = 0; i < n; i++)
                result.push_back(mat[0][i]);
            return result;
        }

        vector<int> result;
        for (int i = 0; i < m; i++)
            result.push_back(mat[i][0]);
        return result;

    }
};