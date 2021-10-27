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
    int t;
    i(t);

    int n,c;
    VI a;
    VI b;
    while(t--) {
        a.clear();
        b.clear();
        i(n);
        for(int i=0; i<n; i++) {
            i(c);
            a.pb(c);
        }
        for(int i=0;i<n;i++) {
            i(c);
            b.pb(c);
        }
        int sum = accumulate(b.begin(),b.end(),0);
        //o(sum);
        bool bl=true;
        for(int i=0;i<n-1;i++) {
            if(a[i]>a[i+1]) {
                bl = false;
                break;
            }
        }
        if(bl) {
            o("yes");
        }
        else if(!bl && (sum<n && sum > 0)) {
            o("yes");
        }
        else
            o("no");
    }
    
    return 0;
}