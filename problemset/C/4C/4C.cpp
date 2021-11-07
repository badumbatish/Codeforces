#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int64_t x = 0;
    cin >> x;
    cin.ignore();
    map<string, int> mp;
    string str;
    while (x--)
    {
        getline(cin, str);
        if (mp[str] == 0)
        {
            cout << "OK\n";
        }
        else
        {
            cout << str << mp[str] << '\n';
        }
        mp[str]++;
    }

    return 0;
}