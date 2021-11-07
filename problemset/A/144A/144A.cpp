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
    VI v(n);
    for(int &i : v) std::cin >> i;

    int max_inx = std::max_element(v.begin(),v.end())-v.begin();
    int count =0;
    for(int i=max_inx;i>0;i--) {
        std::swap(v[i],v[i-1]);
        count++;
    }
    //for(int i : v ) std::cout << i << " ";
    o('\n');
    int min_inx = v.rend() - std::min_element(v.rbegin(), v.rend())-1;
    for(int i=min_inx;i<n-1;i++) {
        std::swap(v[i],v[i+1]);
        count++;
    }

    std::cout << count << std::endl;
    return 0;
}