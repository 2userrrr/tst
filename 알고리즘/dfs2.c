#include <stdio.h>

#define MAX 100
#define row 5
#define colum 6

int map[MAX][MAX] = {
    {1, 1, 0, 0, 0, 1},
    {1, 0, 0, 1, 1, 1},
    {1, 1, 0, 1, 0, 0},
    {0, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 1, 1}};

int visited[MAX][MAX] = {
    0,
};

int dx[4] = {1, -1, 0, 0}; // ¿À¸¥ÂÊ ¿ÞÂÊ À§ ¾Æ·¡
int dy[4] = {0, 0, 1, -1};

int find = 0;

void dfs(int x, int y)
{
    visited[x][y] = 1;
    if(x == row-1 && y == colum-1)
    {
        find = 1;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < row && ny >= 0 && ny < colum)
        {
            if (map[nx][ny] && !visited[nx][ny])
            {
                dfs(nx, ny);
            }
        }
    }
}

int main()
{
    dfs(0, 0);

    if(find)
    {
        printf("¼¶ Å»Ãâ ¿Ï·á!");
    }

    else
    {
        printf("¼¶ Å»Ãâ ½ÇÆÐ¤Ì");
    }
}