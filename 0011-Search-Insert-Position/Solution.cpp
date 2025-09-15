#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int inicio = 0, fim = nums.size() - 1;
        int meio = fim / 2;
        while (inicio <= fim)
        {
            meio = (inicio + fim) / 2;
            if (nums[meio] == target)
            {
                return meio;
            }
            else if (nums[meio] < target)
            {
                inicio = meio + 1;
            }
            else
            {
                fim = meio - 1;
            }
        }
        return inicio;
    }
};