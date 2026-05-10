#include <stdio.h>
#define N 6

int graph[N][N] = {
{0, 0, 0, 0, 0, 0},
{0, 0, 1, 0, 0, 1},
{0, 1, 0, 0, 1, 0},
{0, 0, 0, 0, 1, 0},
{0, 0, 1, 1, 0, 1},
{0, 1, 0, 0, 1, 0}
};

int visited[N] = {0,};

void dfs(int v)
{
    visited[v] = 1;
    printf("%d ", v);

    for(int i = 1; i<N; i++)
    {
        if(graph[v][i] == 1 && visited[i] == 0)
        dfs(i);
    }
}

void bfs(int start)
{
    int queue[N];
    int front = 0; int rear = 0;

    queue[rear++] = start;
    visited[start] = 1;

    while(front != rear)
    {
        int v = queue[front++];
        printf("%d ", v);

        for(int i = 1; i<N; i++)
        {
            if(graph[v][i] == 1 && visited[i] == 0)
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }

}


int main(void)
{
    printf("dfs: ");
    dfs(1);

    printf("\n");
    for(int i=0; i<N; i++) visited[i] = 0;

    printf("bfs: ");
    bfs(1);
}