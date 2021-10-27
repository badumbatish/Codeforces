#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

typedef unordered_map<int, vector<int>> Graph;

unordered_map<int, bool> visited;
Graph graph;


// TESTED
template<typename T> void dfs(T root) {
    if(visited[root]) return;
    visited[root] = true;
    //
    // Put your action on each node you traverse here.
    cout << root << endl;

    for(auto neighbour : graph[root] ) {
        dfs(neighbour);
    }
}


// TESTED
// Connected component is for un directed graphs
template<typename T> int count_connected_component(unordered_map<T, vector<T>> graph) {
    int counter = 0;
    
    for(auto node : graph) {
        if(!visited[node.first]) {
            counter++;
            cout << node.first << endl;
            dfs(node.first);
        }
    }

    return counter;
}



int main() {
    int start_node = 0;

    graph[0].push_back(1);
    graph[1].push_back(0);

    graph[0].push_back(4);
    graph[4].push_back(0);

    graph[1].push_back(-1);
    graph[-1].push_back(1);
    
    graph[1].push_back(3);
    graph[1].push_back(3);
    graph[3].push_back(1);

    graph[-1].push_back(2);
    graph[2].push_back(-1);
    
    //dfs(0);
    

    cout << count_connected_component(graph);

    return 0;
}
