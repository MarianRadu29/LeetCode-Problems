/*class Solution {
    int move(int i,int j,int m,int n)
    {
        if(i==m-1 && j==n-1)
            return 1;
        return (i<m-1?move(i+1,j,m,n):0)+(j<n-1?move(i,j+1,m,n):0);
    }
public:
    int uniquePaths(int m, int n) {
        return move(0,0,m,n);
    }
};
    The solution below is more fast than this tehnique
*/
class Solution {
public:
    int dp[101][101]{};
    int uniquePaths(int m, int n, int i = 0, int j = 0) {
        if(i >= m || j >= n) return 0;
        if(i == m-1 && j == n-1) return 1;
        if(dp[i][j]) return dp[i][j];
        return dp[i][j] = uniquePaths(m, n, i+1, j) + uniquePaths(m, n, i, j+1);
    }
};