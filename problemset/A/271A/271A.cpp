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
    std::cin >> n;

    n++;
    while(true) {
        int first = n%10;
        int second = (n/10)%10;
        int third = (n/100)%10;
        int fourth = (n/1000)%10;
        if((first == second || first == third || first == fourth) 
                || (second == third || second == fourth) 
                || (third == fourth) ) {
            n++;
        }
        else {
            o(n);
            break;
        }
    }
    
    
    return 0;
}