#include "bits/stdc++.h"

using namespace std;

#define MODU 1000000007
#define EPS 1e-9 
#define PI 3.1415926535897932384626433832795

#define i(t) cin >> t
#define il(t) getline(cin,t)

#define o(t) cout << t << '\n'

#define pb(t) push_back(t)

typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef vector<pair<int,int>> VPII;

typedef vector<string> VS, VSTR;

typedef map<int, int> MII;
typedef map<char, int> MCI;

int main() {
    int n;
    int m;
    int t;

    int64_t sum = 0;
    int rem = 0;
    i(n);
    for(int i=0;i<n;i++) {
        i(m);
        sum = 0;
        rem = 0;
        for(int j=1;j<=m;j++) {
            i(t);
            if(t>rem+j) {

                sum += t-rem-j;
                rem += t-rem-j;

            }
        }
        std::cout << sum << std::endl;
    }
    
    
    return 0;
}