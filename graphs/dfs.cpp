#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<char, bool> visited;

template<typename T> void dfs(T current, vector<vector<T>> &v) {
    if(visited[current]) return;
    visited[current] = true;
    //
    // Put your action on each node you traverse here.
    // cout << current << endl;

    for(auto neighbour : v[current] ) {
        dfs(neighbour,v);
    }
}



int main() {
    int start_node = 0;
    vector<vector<int>> v(6);
    v[0].push_back(1);
    v[0].push_back(4);
    v[1].push_back(-1);
    v[1].push_back(3);
    v[1].push_back(3);
    dfs(0,v);

    return 0;
}