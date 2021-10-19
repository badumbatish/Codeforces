#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int64_t L = 0;
    cin >> L;

    if(2*(L/2) + 1  > L) {
        cout << L/2  - 1<< std::endl;
    }
    else {
        cout << L/2  << std::endl;
    }
    return 0;
}