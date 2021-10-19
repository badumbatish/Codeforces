#include <iostream>

using namespace std;
int main() {

    int64_t n,m;
    std::cin >> m;
    std::cin >> n;

    int x = 0;
    int count = 0;
    while(n--) {
        cin >> x;
        if(m-x >=0) {
            count++;
            m-=x;
        }
    }
    cout << count << endl;
    return 0;
}