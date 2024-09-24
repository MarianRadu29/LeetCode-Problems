#include"headers.h"

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size();
        vector<int> OneRows,OneColumns;
        for(vector<int> v: grid){
            int x = 0;
            for(int i : v){
                if(i==1)
                        x++;
            }
            OneRows.push_back(x);
        }
        for(int j=0;j<n;j++){
            int x = 0;
            for(int i=0;i<m;i++){
                if(grid[i][j]==1)
                    x++;
            }
            OneColumns.push_back(x);
        }
        vector<vector<int>> result;
        for(int i=0;i<m;i++){
            vector<int> aux;
            for(int j=0;j<n;j++){
                //cout<<OneRows[i]<<' '<<OneColumns[j]<<' '<<n-OneRows[i]<<' '<<m-OneColumns[j]<<'\n';
                aux.push_back(2*OneRows[i]+2*OneColumns[j]-n-m);
            }
            result.push_back(aux);
        }
        return result;
    }
};