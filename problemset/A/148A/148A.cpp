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

int satisfy(int i, int k, int l, int m, int n) {
    if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0) {
        return 1;
    }
    return 0;
}
int main() {
    int k,l,m,n,d;

    std::cin >> k >> l >> m >> n >> d;

    int count =0;
    for(int i=1;i<=d;i++) {
        count += satisfy(i,k,l,m,n);
    }
    std::cout << count << std::endl;
    
    return 0;
}