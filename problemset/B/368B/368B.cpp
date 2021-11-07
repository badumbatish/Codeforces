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

VI vec(100000 + 1);
VI count_vec(100000 + 1, 0);

VI dp(100000 + 1, -1);

int main()
{

    int n, m;
    cin >> n >> m;

    int64_t t = 0;
    for (int i = 0; i < m; i++)
    {
        i(t);
        vec[i] = t;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            dp[i] = 1;
            count_vec[vec[i]] = 1;
        }
        else
        {
            dp[i] = dp[i + 1] + (count_vec[vec[i]] == 0);
            count_vec[vec[i]] = 1;
        }
    }

    for (int i = 0; i < m; i++)
    {
        i(t);
        cout << dp[t - 1] << '\n';
    }
    return 0;
}