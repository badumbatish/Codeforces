#include "bits/stdc++.h"

using namespace std;

#define MODU 1000000007
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795

#define i(t) cin >> t
#define il(t) getline(cin, t)

#define o(t) cout << t << '\n'

#define pb(t) push_back(t)

typedef vector<int> VI;
typedef vector<vector<int>> VVI;
typedef vector<pair<int, int>> VPII;

typedef vector<string> VS, VSTR;

typedef map<int, int> MII;
typedef map<char, int> MCI;

struct Vtr
{
    int _x = 0;
    int _y = 0;
    int _z = 0;

    Vtr() : _x(0), _y(0), _z(0) {}
    Vtr(int x, int y, int z) : _x{x}, _y{y}, _z{z} {}

    int x()
    {
        return this->_x;
    }
    int y()
    {
        return this->_x;
    }
    int z()
    {
        return this->_x;
    }
    Vtr operator+(Vtr vtr2)
    {
        int x = this->x() + vtr2.x();
        int y = this->y() + vtr2.y();
        int z = this->z() + vtr2.z();

        Vtr temp(x, y, z);

        return temp;
    }

    Vtr &operator+=(Vtr vtr2)
    {
        _x += vtr2.x();
        _y += vtr2.y();
        _z += vtr2.z();
        return *this;
    }
    bool isZero()
    {
        return (_x == 0 && _y == 0 && _z == 0);
    }
};

int main()
{
    int n;
    i(n);

    int x, y, z;

    Vtr vec;
    Vtr sum_vec;
    for (int i = 0; i < n; i++)
    {
        i(x);
        i(y);
        i(z);
        vec = Vtr(x, y, z);
        sum_vec = sum_vec + vec;
    }
    if (sum_vec.isZero())
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    return 0;
}