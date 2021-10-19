#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int64_t n=0;

    cin >> n;

    double sum = 0;
    double pi = 3.14159265359;

    double x,y;
    while(n--) {
        cin >> x >> y;
        sum += pi*(1.0/4)*(x*x+y*y);
    }

    cout << sum << endl;

    return 0;
}