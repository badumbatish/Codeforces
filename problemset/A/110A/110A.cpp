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

bool isLucky(char ch)
{
    return (ch == '4' || ch == '7');
}
int main()
{
    std::string str;
    std::cin >> str;

    int count_lucky = std::count_if(str.begin(), str.end(), isLucky);

    bool isNearlyLucky = (bool)(count_lucky);

    // std::cout << count_lucky << " " << isNearlyLucky << std::endl;
    while (count_lucky)
    {
        int digit = count_lucky % 10;
        isNearlyLucky = (digit == 4 || digit == 7);
        if (isNearlyLucky == false)
        {
            break;
        }
        count_lucky /= 10;
    }
    if (isNearlyLucky)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    return 0;
}