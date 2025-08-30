#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        // verificar linhas validas
        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, bool> seen;
            for (int j = 0; j < 9; j++)
            {
                char c = board[i][j];

                if (c != '.')
                {
                    if (seen[c])
                        return false;
                    else
                        seen[c] = true;
                }
            }
        }
        // verificar colunas validas
        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, bool> seen;
            for (int j = 0; j < 9; j++)
            {
                char c = board[j][i];
                if (c != '.')
                {
                    if (seen[c])
                        return false;
                    else
                        seen[c] = true;
                }
            }
        }

        // verificando subcaixas
        for (int boxRow = 0; boxRow < 3; boxRow++)
        {
            for (int boxColuns = 0; boxColuns < 3; boxColuns++)
            {
                unordered_map<char, bool> seen;
                int startColum = boxColuns * 3;
                int startRow = boxRow * 3;

                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        char c = board[startRow + i][startColum + j];
                        if (c != '.')
                        {
                            if (seen[c])
                                return false;
                            else
                                seen[c] = true;
                        }
                    }
                }
            }
        }
        return true;
    }
};