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

void completedtodo(int completeNode)
{
    if(completeNode < 0 && completeNode >= todocnt)
    return;

    if(completed[completeNode] == 1)
    return;

    completed[completeNode] = 1;
}

void showCompleted()
{
    for(int i = 0; i<todocnt; i++)
    {
        if(completed[i] == 1)
            printf("%d",  i);
    }
}