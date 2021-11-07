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

int main()
{
    std::string str;
    int count_upper = 0;
    int count_lower = 0;

    cin >> str;
    for (char ch : str)
    {
        if (isupper(ch))
            count_upper++;
        else
            count_lower++;
    }
    if (count_upper > count_lower)
    {
        for (char ch : str)
        {
            std::cout << (char)std::toupper(ch);
        }
        std::cout << std::endl;
        return 0;
    }
    else
    {
        for (char ch : str)
        {
            std::cout << (char)std::tolower(ch);
        }
        std::cout << std::endl;
        return 0;
    }
    return 0;
}