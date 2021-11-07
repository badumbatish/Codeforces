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
    std::string str;
    std::string res;

    std::getline(std::cin, str);
    for(int i=0;i<str.size();i++) {
        if(str[i]=='.') {
            res+="0";
        }
        // seg fault will not happen
        else if(str[i]=='-' && str[i+1]=='.') {
            res+="1";
            i++;
        }
        else {
            res+="2";
            i++;
        }
    }
    o(res);
    return 0;
}