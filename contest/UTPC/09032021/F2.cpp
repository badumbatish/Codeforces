#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int64_t n =0;
    cin >> n;


    int64_t x, y;
    int64_t ix=-1, mx = 0;
    int64_t iy=-2, my = 0;
    bool t = false;
    while(n--) {
        cin >> x >> y;
        if(x > y) {
            t = true;
        }
    }

    if(t) cout << "yes\n";
    else cout << "no\n";


    return 0;
}