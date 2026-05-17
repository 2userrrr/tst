#include <stdio.h>

#define MAX 100
#define row 5
#define colum 6

int map[MAX][MAX] = {
    {1, 1, 0, 0, 0, 1},
    {1, 0, 0, 1, 1, 1},
    {1, 1, 0, 1, 0, 0},
    {0, 1, 1, 1, 1, 0},
    {0, 0, 0, 0, 1, 1}};

int visited[MAX][MAX] = {0, };

int dx[4] = {1, -1, 0, 0}; // ¿À¸¥ÂÊ ¿ÞÂÊ À§ ¾Æ·¡
int dy[4] = {0, 0, 1, -1};

int find = 0;

int bfs(int startx, int starty)
{
    int qx[MAX];
    int qy[MAX];
    int rear = 0, front = 0;

    qx[rear] = startx;
    qy[rear] = starty;
    rear++;

    visited[startx][starty] = 1;

    while(rear>front)
    {
        int x = qx[front];
        int y = qy[front];
        front++;

        if(x == row-1 && y == colum-1)
        {
            return 1;
        }

        for(int i = 0; i<4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx>=0 && nx<row && ny>=0 && ny<colum)
            {
                if(map[nx][ny] && !visited[nx][ny])
                {
                    visited[nx][ny] = 1;
                    qx[rear] = nx;
                    qy[rear] = ny;
                    rear++;
                }
            }
        }
    }
    return 0;
    
}

int main()
{
    int result = bfs(0, 0);

    if(result)
    {
        printf("¼¶ Å»Ãâ ¿Ï·á!");
    }

    else
    {
        printf("¼¶ Å»Ãâ ½ÇÆÐ¤Ì");
    }
}