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
    int arr[3][3];
    int config[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            config[i][j] = 1;
        }
    }
    int v1[3] = {-1, 0, 1};
    int v2[3] = {-1, 0, 1};
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            std::cin >> arr[i][j];
            if(arr[i][j] % 2 == 1) {
                for(int q=0;q<3;q++) {
                    for(int p=0;p<3;p++) {
                        int x = i+v1[q];
                        int y = j+v2[p];
                        if(abs(v1[q]) == abs(v2[p]) && q != 1) continue;
                        if(x < 0 || x > 2) continue;
                        if(y < 0 || y > 2) continue;
                        config[x][y] ^= 1;
                    }
                }
            }
        }
    }
    
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            std::cout << config[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}