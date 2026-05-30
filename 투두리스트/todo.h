#ifndef TODO_H
#define TODO_H

#define MAX 10

extern char todolist[MAX][100];
extern int visited[MAX];
extern int graph[MAX][MAX];

void loadTodolist(void);
void loadGraph(void);
void dfs(int node, int finish);

#endif