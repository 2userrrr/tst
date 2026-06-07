#include <stdio.h>
#include "todo.h"

char* checkComplete(int node)
{
    char* check = " ";
    if(completed[node] == 0) check = "Àá±è";
    else check = "¿Ï·á";

    return check;

}

void dfs(int node, int finish)
{
    if(node == finish) return;
    visited[node] = 1;
    printf("[ %s ]", checkComplete(node));
    printf("%s\n", todolist[node]);

    for (int i = 0; i < finish; i++)
    {
        if (graph[node][i] == 1 && visited[i] == 0)
            dfs(i, finish);
    }
    visited[node] = 0;
}

void completedtodo(int completeNode)
{
    if(completeNode < 0 && completeNode >= todocnt)
    return;

    if(completed[completeNode] == 1)
    return;

    completed[completeNode] = 1;
    printf("[ %s ]", checkComplete(completeNode));
}

void showCompleted()
{
    for(int i = 0; i<todocnt; i++)
    {
        if(completed[i] == 1)
        {
            printf("[ %s ]", checkComplete(i));
            printf("%s\n",  todolist[i]); 
        }
    }
}

void showDone()
{
    for(int i = 0; i<todocnt; i++)
    {
        if(completed[i] == 0)
        {
            printf("[ %s ]", checkComplete(i));
            printf("%s\n",  todolist[i]);
        }
    }
}

void showProgress()
{
    int num = 0;
    float ing = 0;

    for(int i = 0; i<todocnt; i++)
    {
        if(completed[i] == 1)
        num++;
    }

    ing = (float)num/todocnt*100;

    printf("%.2f%%\n", ing);
}