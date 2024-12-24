#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int countWaysToConstructSum(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;  // Base case: There's one way to get sum 0 (by not throwing the dice)

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) {
            if (i - j >= 0) {
                dp[i] =(dp[i]+ dp[i - j])%mod;
            }
        }
    }

    return dp[n]%mod;
}

int main() {
    int n;
    cin >> n;
    cout << countWaysToConstructSum(n) << endl;
    return 0;
}
