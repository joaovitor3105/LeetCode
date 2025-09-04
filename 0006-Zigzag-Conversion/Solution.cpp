#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1 || numRows >= s.size())
            return s;
        int rows = 0;
        vector<string> zigzag(numRows);
        bool descendo = true;
        for (char c : s)
        {
            zigzag[rows] += c;

            if (rows == numRows - 1)
            {
                descendo = false;
            }
            else if (rows == 0)
            {
                descendo = true;
            }

            if (!descendo)
            {
                rows--;
            }
            else if (descendo)
            {
                rows++;
            }
        }
        string x;
        for (int i = 0; i < numRows; i++)
        {
            x += zigzag[i];
        }
        return x;
    }
};