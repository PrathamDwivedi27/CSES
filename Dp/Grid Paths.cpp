#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    // Correct the grid type to char
    vector<vector<char>> obstacleGrid(n, vector<char>(n));

    // Input the grid values
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> obstacleGrid[i][j];
        }
    }

    // DP array to store number of ways to reach each cell
    vector<int> prev(n, 0);
    
    // Iterate through the grid
    for (int i = 0; i < n; i++)
    {
        vector<int> temp(n, 0);
        for (int j = 0; j < n; j++)
        {
            // If there is a trap, no way to reach this cell
            if (obstacleGrid[i][j] == '*')
                temp[j] = 0;
            else if (i == 0 && j == 0) // Start point
                temp[j] = 1;
            else
            {
                int left = 0, up = 0;

                // Add number of ways from the top (up)
                if (i > 0)
                    up = prev[j];
                // Add number of ways from the left
                if (j > 0)
                    left = temp[j - 1];

                // Total ways to reach this cell
                temp[j] = (up + left) % mod;
            }
        }
        prev = temp; // Move to the next row
    }

    // Output the number of ways to reach the bottom-right corner
    cout << prev[n - 1] << endl;
}

int main()
{
    int t = 1;
    // Uncomment the next line if there are multiple test cases
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
