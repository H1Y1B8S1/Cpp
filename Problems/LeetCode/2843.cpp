/*
2843. Count Symmetric Integers
*/

class Solution
{
public:
    class Solution
    {
    public:
        int countSymmetricIntegers(int low, int high)
        {
            int c = 0;
            for (int i = low; i <= high; i++)
            {
                if (i < 10 || i > 99 && i < 1000 || i == 10000)
                    continue;
                if (i < 100 && i % 11 == 0)
                    c++;
                else
                {
                    int n1 = i % 100, n2 = i / 100;
                    if (n1 % 10 + n1 / 10 == n2 % 10 + n2 / 10)
                        c++;
                }
            }
            return c;
        }
    }
};
