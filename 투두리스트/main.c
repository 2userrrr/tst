#include <stdio.h>
#include <string.h>
#include "todo.h"

#define MAX 10

char todolist[MAX][100];

int visited[MAX] = {
    0,
};

int graph[MAX][MAX] = {
    0,
};

int completed[MAX] = {
    0,
};

int todocnt;


int main()
{
    int choice;
    int completeNode;

    loadTodolist();
    loadGraph();
    
    while (1)
    {
        printf("\n===== 학습 로드맵 =====\n");
        printf("1. 전체 학습 경로 보기(DFS)\n");
        printf("2. 단계 완료 처리\n");
        printf("3. 현재 가능한 단계 보기\n");
        printf("4. 현재 진행중 보기\n");
        printf("5. 완료한 단계 보기\n");
        printf("6. 종료\n");
        printf("선택: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        dfs(0, todocnt);
            break;
            
        case 2:
        printf("몇 번째 >");
        scanf("%d", &completeNode);
        completedtodo(completeNode);

            break;

        case 3:
        showDone();

            break;
        case 4:
        showProgress();
        
            break;
        case 5:
        showCompleted();

            break;
        case 6:
            return 0;

        default:
        printf("잘못됐어요\n");
            break;
        }
    }
}