#include <stdio.h>
#include "todo.h"

void dfs(int node, int finish)
{
    visited[node] = 1;
    printf("%s\n", todolist[node]);

    for (int i = 0; i < finish; i++)
    {
        if (graph[node][i] == 1 && visited[i] == 0)
            dfs(i, finish);
    }
}