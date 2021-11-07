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
    int n;
    std::cin >> n;
    std::cin.ignore();
    std::string str;
    std::getline(std::cin, str);
    int count = 0;
    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
    }
    std::cout << count << std::endl;

    return 0;
}