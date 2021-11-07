#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int64_t n = 0;
    cin >> n;

    int64_t i = 0;
    int64_t x = 0;
    int64_t s = 0;

    while (n--)
    {
        cin >> x;
        int32_t count = 0;

        while (x)
        {
            count++;
            x /= 2;
        }

        cout << (1 << count - 1) - 1 << endl;
    }

    return 0;
}