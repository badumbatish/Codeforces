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

typedef unordered_map<int, VI> Graph;

Graph graph;
unordered_map<int, bool> visited;

void dfs(int current, int &count)
{
    if (visited[current])
        return;
    else
    {
        visited[current] = true;
        count++;
        for (auto neighbor : graph[current])
        {
            dfs(neighbor, count);
        }
    }
}

VI count_connected_component(Graph graph)
{
    VI v;
    for (auto node : graph)
    {
        if (!visited[node.first])
        {
            int count = 0;
            dfs(node.first, count);
            v.push_back(count);
        }
    }

    return v;
}

int main()
{

    int n, m;
    i(n);
    i(m);

    int arr[m + 1];
    for (int i = 1; i <= n; i++)
    {
        arr[i] = 0;
    }

    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        arr[x] = y;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i] != j || arr[j] != i)
            {
                graph[i].push_back(j);
                graph[j].push_back(i);
            }
        }
    }

    //int count = 0;
    //dfs(0,count);
    VI v = count_connected_component(graph);
    sort(v.begin(), v.end());
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}