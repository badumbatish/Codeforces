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
    int n, m;
    std::cin >> n >> m;

    bool isTrue = true;
    int nextPrime = n+1;
    
    for(nextPrime; nextPrime <= m; nextPrime++) {
        for(int i=2; i*i <= nextPrime;i++) {
            if(nextPrime/i == (double)nextPrime/(i*1.0)) {
                isTrue = false;
            }
        }
        if(isTrue) {
            break;
        }
        isTrue = true;
    }
    //o(nextPrime);
    if(isTrue && m == nextPrime ) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}