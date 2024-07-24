/*
2998. Minimum Number of Operations to Make X and Y Equal
*/

#include <iostream>
#include <queue>
#include <unordered_set>

using namespace std;

int minOperations(int x, int y)
{
    if (x == y)
        return 0;

    queue<pair<int, int>> q;
    unordered_set<int> visited;

    q.push({x, 0});
    visited.insert(x);

    while (!q.empty())
    {
        auto [current, operations] = q.front();
        q.pop();

        // List of possible next operations
        int nextValues[4] = {current + 1, current - 1};
        if (current % 11 == 0)
            nextValues[2] = current / 11;
        else
            nextValues[2] = current;
        if (current % 5 == 0)
            nextValues[3] = current / 5;
        else
            nextValues[3] = current;

        for (int i = 0; i < 4; ++i)
        {
            int nextValue = nextValues[i];
            if (nextValue == y)
                return operations + 1;
            if (visited.find(nextValue) == visited.end() && nextValue > 0)
            {
                q.push({nextValue, operations + 1});
                visited.insert(nextValue);
            }
        }
    }

    return -1; // should not reach here
}

int main()
{
    int x = 26, y = 1;
    cout << "Minimum operations to make " << x << " equal to " << y << ": " << minOperations(x, y) << endl;

    x = 54, y = 2;
    cout << "Minimum operations to make " << x << " equal to " << y << ": " << minOperations(x, y) << endl;

    x = 25, y = 30;
    cout << "Minimum operations to make " << x << " equal to " << y << ": " << minOperations(x, y) << endl;

    return 0;
}
