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
    int64_t n;
    i(n);

    int64_t x;
    while(n--) {
        i(x);

        int a, b, c;
        int64_t temp=x;

        bool end = false;
        // We define the stopping limit to be x/i
        // because of how primes work

        // In our case n = a * (b * c)
        // a has to be less than sqrt_n and (b*c) larger than sqrt(n)
        // for this to work

        // so we only check up to x/i
        // continue to check up to x is fine
        // but it is just the mirror from 1 to x/i

        // take 16 for example
        // sqrt16 = 4

        // we only check i = 1,2,3,4
        // because as soon as we go over to 8
        // it is the same

        // it is the associative property of multiplication
        for(int i=2;i<=x/i;i++) {
            if(x%i==0) {
                temp = x/i;
                a = i;
                for(int j=i+1;j<=temp/j;j++) {
                    if(temp%j == 0) {
                        b = j;
                        if(temp/j > a && temp/j > b) {
                            c = temp/j;
                            end = true;
                            break;
                        }
                    }
                }
            }
            if(end) break;
        }
        if(end) {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}