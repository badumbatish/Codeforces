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

char XOR(char ch1, char ch2) {
    if(ch1 != ch2) {
        return '1';
    }
    return '0';
}

int main() {
    std::string str1;
    std::string str2;
    
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);

    std::string res = str1;
    for(int i=0;i<str1.size();i++) {
        res[i] =  XOR(str1[i],str2[i]);
    }

    std::cout << res << std::endl;
    return 0;
}