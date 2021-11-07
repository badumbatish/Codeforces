#include "bits/stdc++.h"

using namespace std;

#define MODU 1000000007
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795

#define i(t) cin >> t
#define il(t) getline(cin, t)

#define o(t) cout << t << '\n'

#define pb(t) push_back(t)

typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef vector<pair<int, int>> VPII;

typedef vector<string> VS, VSTR;

typedef map<int, int> MII;
typedef map<char, int> MCI;

int64_t dp[100005];
MII mi;
void solve()
{
    for (int i = 0; i < 100005; i++)
    {
        if (i == 0)
        {
            dp[i] = 0;
        }
        else if (i == 1)
        {
            dp[i] = mi[i] * i;
        }
        else
        {
            dp[i] = std::max(dp[i - 1], dp[i - 2] + (int64_t)mi[i] * i);
        }
    }
}

int main()
{
    int n;
    i(n);

    int t;
    for (int i = 0; i < n; i++)
    {
        i(t);
        mi[t]++;
    }
    solve();
    std::cout << dp[100004];
    return 0;
}