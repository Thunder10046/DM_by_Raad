#include <bits/stdc++.h>
#define V 6

using namespace std;

bool isBipartite(int graph[][V], int source)
{
    int colorArr[V];
    for (int i = 0; i < V; ++i)
        {
            colorArr[i] = -1;
        }

    colorArr[source] = 1;

    queue<int> q;
    q.push(source);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        if (graph[u][u] == 1)
            return false;

        for (int v = 0; v < V; ++v)
        {
            if (graph[u][v] && colorArr[v] == -1)
            {
                colorArr[v] = 2;
                q.push(v);
            }
            else if (graph[u][v] && colorArr[v] == colorArr[u])
                return false;
        }
    }

    return true;
}

int main()
{
    int graph[][V] = {
        {0, 1, 0, 1, 1, 0},
        {1, 0, 1, 0, 0, 1},
        {0, 1, 0, 1, 1, 0},
        {1, 0, 1, 0, 0, 1},
        {1, 0, 1, 0, 0, 1},
        {0, 1, 0, 1, 1, 0}
    };

    bool isGraphBipartite = isBipartite(graph, 0);

    if (isGraphBipartite) {
        cout << "The graph is bipartite.";
    }
    else {
        cout << "The graph is not bipartite.";
    }

    return 0;
}
