#include <iostream>
#include <vector>


using namespace std;
int main() {

    vector<vector<int>> v(10);

    int n;
    cin >> n;

    int x,y;

    int n1=n;
    while(n--) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    
    bool t=false;
    int count = 0;
    for(int i=0;i<n1;i++) {
        if(v[i].size() >= 3) {
            cout << "Happy Doggos!\n";
            return 0;
        }
        if(v[i].size() == 0) {
            count++;
        }
        if(count >= 3) {
            cout << "Happy Doggos!\n";
            return 0;
        }
    }

    cout << "Sad Doggos...\n";

}