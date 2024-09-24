#include"headers.h"

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++)
        {
            array<int, 10> fr1 = {0};
            array<int, 10> fr2 = {0};
            for (int j = 0; j < board.size(); j++)
            {
                if (board[i][j] >= '1' && board[i][j] <= '9')
                {   
                    fr1[int(board[i][j] - '0')]++;
                    if (fr1[int(board[i][j] - '0')] > 1)
                        return false;
                }

                if (board[j][i] >= '1' && board[j][i] <= '9')
                {
                    fr2[int(board[j][i] - '0')]++;
                    if (fr2[int(board[j][i] - '0')] > 1)
                        return false;
                }

            }

            if (i % 3 == 0)
            {
                
                array<int, 10> frr1 = { 0 };
                array<int, 10> frr2 = { 0 };
                array<int, 10> frr3 = { 0 };

                for (int k = i; k < i + 3; k++)
                {
                    for (int j = 0; j < 3; j++)
                    {   
                        if (board[k][j] >= '1' && board[k][j] <= '9')
                        {
                            frr1[int(board[k][j] - '0')]++;
                            if (frr1[int(board[k][j] - '0')] > 1)
                                return false;
                        }

                    }

                    for (int j = 3; j < 6; j++)
                    {
                        if (board[k][j] >= '1' && board[k][j] <= '9')
                        {
                            frr2[int(board[k][j] - '0')]++;
                            if (frr2[int(board[k][j] - '0')] > 1)
                                return false;
                        }

                    }

                    for (int j = 6; j < 9; j++)
                    {
                        if (board[k][j] >= '1' && board[k][j] <= '9')
                        {
                            frr3[int(board[k][j] - '0')]++;
                            if (frr3[int(board[k][j] - '0')] > 1)
                                return false;
                        }

                    }
                }


            }
            
        }
        return true;
    }
};