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

    vector<int64_t> v;
    int x;
    while(n--) {
        i(x);
        v.pb(x);
    }

    sort(v.begin(), v.end());

    int64_t diff = *(v.end()-1) - *(v.begin());

    
    int64_t way;
    
    if(*(v.begin()) == *(v.end()-1)) {
       way = (v.size()*(v.size()-1))/2;
    }
    else way = (int64_t)count(v.begin(),v.end(),*(v.end()-1)) *
        count(v.begin(),v.end(),*(v.begin()));

    cout << diff << " " << way << endl;
    
    return 0;
}