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
    i(n);

    VI v;
    int t;
    int ones=0;
    int zeros =0;
    while(n--) {
        i(t);
        if(t==1) ones++;
        if(t==0) zeros++;
        v.pb(t);
    }
    
    
    return 0;
}