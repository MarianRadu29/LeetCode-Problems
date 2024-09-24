#include"headers.h"

class Solution {
public:
    void generate_combinations(vector<vector<int>> &result, vector<int> aux, vector<bool> viz, int n, int k, int current)
    {
        if (current == k)
        {
            result.push_back(aux);
            return;
        }

        for (int i = 1; i <=n; i++)
        {
            if (viz[i-1] == false)
            {
                aux.push_back(i);
            // for(int i:aux)
                //  cout<<i<<' ';
            //  cout<<'\n';
                viz[i-1] = true;
                generate_combinations(result, aux, viz, n, k, current + 1);
                aux.pop_back();
            }
        }

    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<bool> viz(n, false);
        generate_combinations(result, {}, viz, n, k, 0);
        return result;
    }
};