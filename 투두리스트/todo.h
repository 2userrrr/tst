#ifndef TODO_H
#define TODO_H

#define MAX 10

extern char todolist[MAX][100];
extern int visited[MAX];
extern int graph[MAX][MAX];
extern int completed[MAX];
extern int todocnt;

void loadTodolist(void);
void loadGraph(void);
void dfs(int node, int finish);
void completedtodo(int completeNode);
void showCompleted(void);
void showDone(void);

#endif