#include <stdio.h>
#include <string.h>
#include "todo.h"

void loadGraph(void)
{
    int index = 0;
    FILE *fp = fopen("graph.txt", "r");

    if (fp == NULL)
    {
        printf("읽기 실패");

        return;
    }

    int first;
    int second;

    while (fscanf(fp, "%d %d", &first, &second) != EOF)
    {
        graph[first][second] = 1;
    }

    fclose(fp);
}

void loadTodolist(void)
{
    int index = 0;
    FILE *fp = fopen("todo.txt", "r");

    if (fp == NULL)
    {
        printf("읽기 실패");

        return;
    }

    while (fgets(todolist[index], sizeof(todolist[index]), fp))
    {
        todolist[index][strcspn(todolist[index], "\n")] = 0;
        index++;
    }

    todocnt = index;

    fclose(fp);
}
