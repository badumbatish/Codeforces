# GRAPHS IMPLEMENTATIONSSSS

### Let's talk graph problems and their implementation in C++

## DFS

The Depth First Search introduced here will be implemented in a 
recursive fashion

We will traverse the graph recursively, pre-orderly
Pseudo Code:
```
n = number of nodes in the graph
g = adjacency list representing the graph

array visited = [false, false, false, ...., false] # size n

function dfs(at):
    if visited[at]: return
    visited[at] = true

    for neighbour in neighbours of graph[a]:
        dfs(next)

start_node = 0
dfs(start_node)

```