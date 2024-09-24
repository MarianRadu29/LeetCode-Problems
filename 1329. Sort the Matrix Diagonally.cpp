#include"headers.h"

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
    int n = mat.size(), m = mat[0].size();
    if (n == 1 || m == 1)
        return mat;

   
    for (int i = n-1; i >= 0; i--)
    {
        int k = i;
        
        while (k < n && k-i < m )
        {
            int kk = k + 1;
            while (kk  < n && kk - i < m)
            {
                if (mat[k][k-i] > mat[kk][kk-i])
                {
                    //cout << "swap: [ " << mat[k][k-i] << " , " << mat[kk][kk-i] <<" ]\n";
                    swap(mat[k][k - i], mat[kk][kk - i]);
                    /*
                    for (auto v : mat)
                    {
                        for (auto i : v)
                            cout << i << ' ';
                        cout << '\n';
                    }
                    cout << '\n';
                    */
                }
                kk++;
            }
            k++;
        }
       
    }


    for (int i = 1; i < m; i++)
    {
        int k = i;//pt coloana
        int l = 0;//pt linie
       
        while (k < m && l < n)
        {   
            
            int kk = k + 1;
            int ll = l + 1;
            while (kk  < m && ll < n)
            {
                
                if (mat[l][k] > mat[ll][kk])
                    swap(mat[l][k], mat[ll][kk]);
                kk++;
                ll++;
                //cout << kk << ' ' << ll << '\n';
            }
            k++;
            l++;
        }
       
    }
    return mat;

}
};