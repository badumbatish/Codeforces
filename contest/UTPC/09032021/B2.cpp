#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {
    
    map<char,int64_t> mp;
    for(int i=1; i<= 26;i++) {
        mp[(char)(96+i)]=i;
        //cout << (char)(96+i) << " " << mp[(char)(96+i)] << endl;
    }

    string str;
    getline(cin,str);
    int64_t modu = 1000000007;
    int64_t prod = 1;
    for(char i : str) {
        //cout << mp[i] << endl;
        
        prod = ((prod%modu) * (mp[i]%modu) ) % modu;

        
    }

    cout << prod;

    return 0;
}